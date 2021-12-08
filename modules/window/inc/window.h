#include <stdlib.h>


/* Low level element */
typedef struct menuitem {
    char *name; // Displayed name
    void *onClick; // Function to call
} MenuItem;

/* Low level element container toggled when topmenu is clicked */
typedef struct menubox {
    MenuItem *menuitem;
} MenuBox;

/* Top level menu  */
typedef struct topmenu {
    char *name; // Displayed in the menu bar
    MenuBox *menubox;
    struct topmenu *next;
} TopMenu;

/* Menu bar contained in window */
typedef struct menubar {
    TopMenu *topmenu;
} MenuBar;

typedef struct window {
    char *title;
    MenuBar *menubar;
    int x; int y;
    int w; int h;

} Window;

/* Allocating new MenuItem */
MenuItem *w_new_menuitem(char *name, void *onClick, MenuBox *menubox);

/* Allocating new MenuBox */
MenuBox *w_new_menubox(MenuItem *menuitem);

/* Allocating new TopMenu */
TopMenu *w_new_topmenu(char *name, MenuBox *menubox, TopMenu *next);

/* Allocating new MenuBar */
MenuBar *w_new_menubar(TopMenu *topmenu);

/* Allocating new Window */
Window *w_new(char *title, MenuBar *menubar, int x, int y, int w, int h);


