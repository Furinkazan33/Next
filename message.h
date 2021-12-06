
typedef struct message_ Message;

int add_to_queue(Message *m);
int print_queue();

Message *new(int id, int message_id, int from, int to, const char *info); 

enum message_list { CLOSING = 10, OPENING, HIDING, MAXIMIZING, RESTORING, 
    CALCULATING, WAITING, MOVING, MOVING_TO, RESIZING, DRAWING, SAVING, 
    MESSAGE, MESSAGE_TO, WAITING_MESSAGE, WAITING_MESSAGE_FROM, 
    NEED_MORE_PRIOR, NEED_LESS_PRIOR, NEED_MORE_MEM, NEED_LESS_MEM };
