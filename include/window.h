

/* Graphic context structure definition */
typedef struct gc {
    int x;
    int y;
    int w;
    int h;
} Gcontext;

/* Window structure definition */
typedef struct window {
    Gcontext *context;
    char *title;
    
} Window;

/* Allocating new graphic context */
Gcontext *gc_new(int x, int y, int w, int h);

/* Allocating new window */
Window *w_new(Gcontext *gc, char *title);


