#include <stdlib.h>
#include <window.h>

/* Allocating new graphic context */
Gcontext *gc_new(int x, int y, int w, int h) {
    Gcontext *gc = (Gcontext *) malloc(sizeof(Gcontext));
    
    gc->x = x;
    gc->x = y;
    gc->x = w;
    gc->x = h;
    
    return gc;
}

/* Allocating new window */
Window *w_new(Gcontext *gc, char *title) {
    Window *w = (Window *) malloc(sizeof(Window));
    w->title = title;
    w->context = gc;
        
    return w;
}


