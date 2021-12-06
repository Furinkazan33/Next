#include <stdio.h>
#include <stdlib.h>

typedef struct message_ {
    int id;
    int message_id;
    int from_id;
    int to_id;
    char info[50];
} Message;


Message *messages_queue[200] = { 0 };
int nb_messages = 0;


enum message_list { CLOSING = 10, OPENING, HIDING, MAXIMIZING, RESTORING, 
    CALCULATING, WAITING, MOVING, MOVING_TO, RESIZING, DRAWING, SAVING, 
    MESSAGE, MESSAGE_TO, WAITING_MESSAGE, WAITING_MESSAGE_FROM, 
    NEED_MORE_PRIOR, NEED_LESS_PRIOR, NEED_MORE_MEM, NEED_LESS_MEM };


Message *new(int id, int message_id, int from, int to, const char *info) {
    int i = 0;
    Message *mess = (Message *) malloc(sizeof(Message));

    mess->id = id;
    mess->message_id = message_id;
    mess->from_id = from;
    mess->to_id = to;

    while(info[i] != '\0') {
        mess->info[i] = info[i];
        i++;
    }

    return mess;
}

int add_to_queue(Message *message) {
    messages_queue[nb_messages++] = message;
    messages_queue[nb_messages] = NULL;

    printf("New message : %d %d %s\n", message->id, message->message_id, message->info);

    return 0;
}

void print_queue(void) {
    int i = 0;
    Message *message;

    while(messages_queue[i] != NULL) {
        message = messages_queue[i++];
        printf("%d %d %s\n", message->id, message->message_id, message->info);
    }
}

/*
   int main (void) {

   Message *message = new(1, CLOSING, 1, 2, "un test");
   add_to_queue(message);

   message = new(1, CLOSING, 2, 3, "un test 2");
   add_to_queue(message);

   print_queue();

   return 0;
   }
   */

