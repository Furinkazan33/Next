#include <stdlib.h>
#include <queue.h>

/* Pointer to the top */
node_t *queue_head = NULL;

/* Add data to a new node and returns it */
node_t *queue_new(void *data, size_t size) {
    node_t *node = (node_t *) malloc(sizeof(node_t));
    node->data = data;
    
    return node;
}

/* Add node to the top */
void queue_add(node_t *orphan_node) {
    orphan_node->son = queue_head;
    queue_head = orphan_node;
}

/* Top first element */
node_t *queue_top() {
    if (queue_head == NULL) {
        return NULL;
    }

    node_t *top = malloc(sizeof(node_t *));
    top = queue_head;
    queue_head = queue_head->son;

    return top;
}

