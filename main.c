#include <stdio.h>
#include "message.h"




int main (void) {

    Message *message = new(1, CLOSING, 1, 2, "un test");
    add_to_queue(message);

    message = new(1, CLOSING, 2, 3, "un test 2");
    add_to_queue(message);

    print_queue();

    return 0;
}



