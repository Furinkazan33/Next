#include <stdio.h>
#include <message.h>
#include <queue.h>

/*
 * Main test file
 * Adding messages to the queue, retrieving and printing them
 */
int main (void) {

    Message *message = message_new(1, CLOSING, 1, 2, "un test");  
    node_t *node = queue_new(message, sizeof(Message));
    queue_add(node);

    message = message_new(1, CLOSING, 2, 3, "un test 2");
    node = queue_new(message, sizeof(Message));
    queue_add(node);

    message_print_header();

    node_t *n;
    for (n = queue_top(); n != NULL; n = queue_top()) {
        message_print_details(n->data);
    }

    return 0;
}
