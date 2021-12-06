#include <stdio.h>
#include <stdlib.h>
//#include "/usr/include/string.h"
#include <string.h>

#define DATA_LEN 50


typedef struct node {
    void *data;
    struct node *son;
} node_t;

node_t *head = NULL;


node_t *new(void *data, size_t size) {
    node_t *node = (node_t *) malloc(sizeof(node_t));
    node->data = (void *) malloc (size);
    memcpy(node->data, data, size);

    return node;
}

node_t *top() {
    if (head == NULL) {
        return NULL;
    }

    node_t *top = malloc(sizeof(node_t *));
    top = head;
    head = head->son;

    return top;
}

/* Add node to the head */
void add(node_t *orphan_node) {
    orphan_node->son = head;
    head = orphan_node;
}

// TODO: delete
typedef struct test_ {
    int a;
    int b;
    char *mess;
} test;

int main(void) {
    node_t *n1 = new("node 1", 10);
    node_t *n2 = new("node 2", 6);
    add(n1);
    add(n2);

    /*
       test *m = malloc(sizeof(test));
       m->mess = "node 3";
       node_t *n3 = new(m, sizeof(test));
       add(n3);
       */

    node_t *n;
    for (n = top(); n != NULL; n = top()) {
        printf("node : %s\n", (char *) n->data);
    }
    //printf("n3 : %s\n", (char *) ((test *) n3->data)->mess);

    return 0;
}



