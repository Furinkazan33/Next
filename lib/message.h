
typedef struct message_ {
    int id;
    int ident;
    int from;
    int to;
    char info[50];
} Message;

Message *message_new(int id, int ident, int from, int to, const char *info); 
void message_print_header();
void message_print_details(Message *m);

enum message_list { CLOSING = 10, OPENING, HIDING, MAXIMIZING, RESTORING, 
    CALCULATING, WAITING, MOVING, MOVING_TO, RESIZING, DRAWING, SAVING, 
    MESSAGE, MESSAGE_TO, WAITING_MESSAGE, WAITING_MESSAGE_FROM, 
    NEED_MORE_PRIOR, NEED_LESS_PRIOR, NEED_MORE_MEM, NEED_LESS_MEM };
