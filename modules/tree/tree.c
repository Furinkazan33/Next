#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
#include <tree.h>

/* Allocating new leaf and return it */
Tree *allocate_tree(void *content) {

    printf("malloc %d\n", sizeof(Tree));

    Tree *tree = (Tree *) malloc(sizeof(Tree));
    tree->content = content;
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

/* Swap two children by given indexes */
void tree_swap_children(Tree *tree, int idx1, int idx2) {
    Tree *tmp;

    printf("Swaping children with indexes %d and %d\n", idx1, idx2);

    tmp = tree->children[idx1];
    tree->children[idx1] = tree->children[idx2];
    tree->children[idx2] = tmp;
}

/* Free tree recursively 
   With custom free function for content
*/
void tree_free(Tree *tree, void (*content_free_func)(void *)) {
    int i = 0;

    for (i = tree->z - 1; i >= 0; i--) {
        tree_free(tree->children[i], content_free_func);
    }

    tree->z=0;
    
    if(content_free_func != NULL && tree->content != NULL) {
        printf("Appel custom free sur %d\n", &tree->content);
        content_free_func(tree->content);    
    }
    printf("avant free tree : %d\n", &tree->content);
    free(tree);
}

/* Remove child to parent's children list */
void tree_remove_child(Tree *tree, int idx) {
    int i;

    printf("Removing children with index %d\n", idx);

    tree_free(tree->children[idx], NULL);

    for (i = idx; i < tree->z; i++) {
        tree->children[i] = tree->children[i + 1];
    }
    tree->children[i] = NULL;
    tree->z--;
}


void content_free_func(void *p) {
    printf("%d\n", p);
    tree_free(p, NULL);
}


void tree_print(Tree *tree) {
    Tree *tmp;
    int i;
   
    printf("Parent %d with %d children : \n", &tree->content, tree->z);
    
    for (i = 0; tree->children[i] != NULL; i++) {
        tmp = tree->children[i];
        printf("Child %d with %d children\n", &tmp->content, tmp->z);
    }
    
    printf("\n");
}

   int main(void) {
   
   char *p0 = "p0";
   char *c0 = "c0";
   char *c1 = "c1";
   char *c2 = "c2";

   Tree *t1 = allocate_tree(p0);
   Tree *t2 = allocate_tree(c0);
   Tree *t3 = allocate_tree(c1);
   Tree *t4 = allocate_tree(c2);
   
   tree_add_child(t1, t2);
   tree_add_child(t1, t3);
   tree_add_child(t1, t4);

   tree_print(t1);

   tree_swap_children(t1, 0, 2);
   tree_print(t1);

   tree_remove_child(t1, 1);
   tree_print(t1);
   
   tree_swap_children(t1, 1, 0);
   tree_print(t1);

   tree_free(t1, NULL);
   
   
   Tree *t5 = allocate_tree(NULL);
   Tree *t6 = allocate_tree(t5);
   tree_add_child(t6, t5);
   tree_print(t6);
   tree_free(t6, content_free_func);

   return 0;
   }
   




