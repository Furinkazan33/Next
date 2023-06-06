#include <stdlib.h>

/*
 * A tree is
 */

#define MAX_CHILDREN 50

/* Basic tree structure */
typedef struct tree {
    void *content; // Adapt to your needs with custom free function
    struct tree *children[MAX_CHILDREN + 1];
    int z;  // Number of children. children[z] set to NULL for commodities 
            // when adding/removing a child
} Tree;

/* Allocating new node and return it */
Tree *allocate_tree(void *content);

/* Add child to parent's children list */
void tree_add_child(Tree *tree, Tree *child);

/* Swap two children by given index */
void tree_swap_children(Tree *tree, int from, int to);

/* Free tree recursively */
void tree_free(Tree *tree, void (*free_func)(void *));

/* Remove child to parent's children list */
void tree_remove_child(Tree *tree, int idx);



