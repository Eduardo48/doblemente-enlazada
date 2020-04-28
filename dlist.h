#ifndef DLIST_H
#define DLIST_H

#include "dnode.h"

typedef struct _dlist dlist;

struct _dlist{
    dnode *head;
    dnode *tail;
    int num;
};

dlist *create_dlist();//f
bool remove_dlist(dlist *l);//f

bool insert_init(dlist *l, DATA data);//f
bool insert_end(dlist *l, DATA data);//f
bool insert_dlist(dlist *l, DATA data, int pos);//f

bool remove_init(dlist *l);//f
bool remove_end(dlist *l);//F
bool remove_pos(dlist *l ,int pos);//F

DATA search_dlist(dlist *l, int pos);//f
int locate_dlist(dlist *l, DATA data);//f

void print_dlist(dlist *l);//f

bool is_empty_dlist(dlist *l);//f
void empty_dlist(dlist *l);//f

bool delete_data(dlist *l, DATA data);
#endif
