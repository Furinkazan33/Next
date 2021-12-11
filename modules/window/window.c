#include <stdlib.h>
#include <window.h>

/* Allocating new MenuItem */
MenuItem *w_new_menuitem(char *name, void *onClick, MenuBox *menubox) {
    MenuItem *m = (MenuItem *) malloc(sizeof(MenuItem));
    m->name = name;
    m->onClick = onClick;

    return m;
}

/* Allocating new MenuBox */
MenuBox *w_new_menubox(MenuItem *menuitem) {
    MenuBox *m = (MenuBox *) malloc(sizeof(MenuBox));
    m->menuitem = menuitem;

    return m;
}

/* Allocating new TopMenu */
TopMenu *w_new_topmenu(char *name, MenuBox *menubox, TopMenu *next) {
    TopMenu *m = (TopMenu *) malloc(sizeof(TopMenu));
    m->name = name;
    m->menubox = menubox;
    m-> next = next;

    return m;
}

/* Allocating new MenuBar */
MenuBar *w_new_menubar(TopMenu *topmenu) {
    MenuBar *m = (MenuBar *) malloc(sizeof(MenuBar));
    m->topmenu = topmenu;

    return m;
}

/* Allocating new Window */
Window *w_new(char *title, MenuBar *menubar, int x, int y, int w, int h) {
    Window *win = (Window *) malloc(sizeof(Window));
    win->title = title;
    win->menubar = menubar;
    win->x = x;
    win->y = y;
    win->w = w;
    win->h = h;

    return win;
}


