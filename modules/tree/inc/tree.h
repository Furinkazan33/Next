#include <stdlib.h>

/*
 * A tree is
 */

#define MAX_CHILDREN 10

/* Basic tree structure */
typedef struct tree {
    void *content;
    struct tree *children[MAX_CHILDREN];
    int z;
} Tree;

/* Allocating new leaf and return it */
Tree *allocate_tree(void *content, size_t size);

/* Add child to parent's children list */
void tree_add_child(Tree *tree, Tree *child);

/* Swap two children by given index */
void tree_swap_children(Tree *tree, int from, int to);

/* Free tree recursively */
void tree_free(Tree *tree);

/* Remove child to parent's children list */
void tree_remove(Tree *tree, int idx);



