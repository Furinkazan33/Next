#include <stdio.h>
#include <stdlib.h>
#include "message.h"


Message *message_new(int id, int ident, int from, int to, const char *info) {
    int i = 0;
    Message *mess = (Message *) malloc(sizeof(Message));

    mess->id = id;
    mess->ident = ident;
    mess->from = from;
    mess->to = to;

    while(info[i] != '\0') {
        mess->info[i] = info[i];
        i++;
    }

    return mess;
}


void message_print_header() {
    printf("id\tmess_id\t\tfrom\tto\tinfo\n");
}

void message_print_details(Message *m) {
    printf("%d\t%d\t\t%d\t%d\t%s\n", m->id, m->ident, m->from, m->to, m->info);
}

/*
   int main(void) {
   Message *m = message_new(1, OPENING, 0, 0, "test");

   message_print_header();
   message_print_details(m);

   return 0;

   }
   */

