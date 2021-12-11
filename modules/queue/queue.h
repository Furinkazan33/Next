/* 
 * A queue is a chained list consisting of 
 *  adding/retrieving element from the top (FILO)
 */

/* A node is the basic structure of the queue containing 
 *  a pointer to the data
 *  a pointer to the next node
 */
typedef struct node {
    void *data;
    struct node *son;
} node_t;

/* 
 * Add data to a new node and return it 
 */
node_t *queue_new(void *data, size_t size);

/* 
 * Add node to the end 
 */
void queue_add(node_t *orphan_node);

/* 
 * Retrieve top node
 */
node_t *queue_top();


