#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <tree.h>

/* Allocating new leaf and return it */
Tree *allocate_tree(void *content, size_t size) {
    Tree *tree = (Tree *) malloc(sizeof(Tree));
    tree->content = (void *) malloc(size);
    memcpy(tree->content, content, size);
    tree->children[0] = NULL;
    tree->z = 0;

    return tree;
}

/* Add child to parent's children list */
void tree_add_child(Tree *tree, Tree *child) {
    tree->children[tree->z] = child;
    tree->z++;
    tree->children[tree->z] = NULL;
}

/* Swap two children by given index */
void tree_swap_children(Tree *tree, int from, int to) {
    Tree *tmp;

    printf("Swaping children with indexes %d and %d\n", from, to);

    assert(from < to);

    tmp = tree->children[from];
    tree->children[from] = tree->children[to];
    tree->children[to] = tmp;
}

/* Free tree recursively */
void tree_free(Tree *tree) {
    int i = 0;

    for (i = 0; i < tree->z; i++) {
        tree_free(tree->children[i]);
    }

    free(tree->children);
    free(tree->content);
    free(tree);
}

/* Remove child to parent's children list */
void tree_remove_child(Tree *tree, int idx) {
    int i;

    printf("Removing children with index %d\n", idx);

    tree_free(tree->children[idx]);

    for (i = idx; i < tree->z; i++) {
        tree->children[i] = tree->children[i + 1];
    }
    tree->children[i] = NULL;
    tree->z--;
}



/*
   int main(void) {
   Tree *tmp;
   int i;
   char *s1 = "test 1";
   char *s2 = "test 2";
   char *s3 = "test 3";
   char *s4 = "test 4";

   Tree *t1 = allocate_tree(s1, 7);
   Tree *t2 = allocate_tree(s2, 7);
   Tree *t3 = allocate_tree(s3, 7);
   Tree *t4 = allocate_tree(s4, 7);

   tree_add_child(t1, t2);
   tree_add_child(t1, t3);
   tree_add_child(t1, t4);

   printf("%s with %d children : \n", t1->content, t1->z);
   for (i = 0; t1->children[i] != NULL; i++) {
   tmp = t1->children[i];
   printf("%s with %d children\n", tmp->content, tmp->z);
   }
   printf("\n");

   tree_swap_children(t1, 0, 2);
   printf("%s with %d children : \n", t1->content, t1->z);
   for (i = 0; t1->children[i] != NULL; i++) {
   tmp = t1->children[i];
   printf("%s with %d children\n", tmp->content, tmp->z);
   }
   printf("\n");

   tree_remove(t1, 1);
   printf("%s with %d children : \n", t1->content, t1->z);
   for (i = 0; i < t1->z; i++) {
   tmp = t1->children[i];
   printf("%s with %d children\n", tmp->content, tmp->z);
   }



   tree_free(t1); 


   return 0;
   }
   */




