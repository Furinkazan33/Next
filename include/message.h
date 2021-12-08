
/* Message definition
 * id : unique message id
 * ident : message type from IDENT enumeration
 * from : unique id of the sender
 * to : unique id of the recipient
 * info : the content of the message
 */
typedef struct message_ {
    int id;
    int ident;
    int from;
    int to;
    char info[50];
} Message;

/* Possible types of messages see doc for more infos */
enum IDENT { CLOSING = 10, OPENING, HIDING, MAXIMIZING, RESTORING, 
    CALCULATING, WAITING, MOVING, MOVING_TO, RESIZING, DRAWING, SAVING, 
    MESSAGE, MESSAGE_TO, WAITING_MESSAGE, WAITING_MESSAGE_FROM, 
    NEED_MORE_PRIOR, NEED_LESS_PRIOR, NEED_MORE_MEM, NEED_LESS_MEM };
    
/* Allocate new message and return it */
Message *message_new(int id, int ident, int from, int to, const char *info); 

/* print message properties list */
void message_print_header();

/* Print message details according to header */
void message_print_details(Message *m);


