#include <stdio.h>
#include <stdlib.h>
#include "dlist.h"

int main(){
    dlist *l;
    l = create_dlist();
    insert_dlist(l, 0, 0);
    insert_dlist(l, 2, 1);
    insert_end(l,3);
    insert_init(l,7);
    insert_dlist(l,10,2);
    print_dlist(l);
    remove_init(l);
    remove_end(l);
    print_dlist(l);
    remove_pos(l,1);
    print_dlist(l);
    insert_end(l,8);
    insert_init(l,9);
    print_dlist(l);
    remove_pos(l,1);
    remove_pos(l,2);
    print_dlist(l);
    delete_data(l,9);
    print_dlist(l);
    insert_end(l,5);
    insert_end(l,4);
    insert_end(l,7);
    print_dlist(l);
    delete_data(l,5);
    delete_data(l,4);
    print_dlist(l);
    remove_end(l);
    print_dlist(l);
    remove_dlist(l);
    return 0;
}
