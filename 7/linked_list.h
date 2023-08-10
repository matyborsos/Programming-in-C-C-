#ifndef linked_list_h
#define linked_list_h

#include <stdio.h>
#include <stdlib.h>

/* CH-230-A
   a7 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

struct list {
    int info ;
    struct list * next ; /* self reference */
};
void print_list ( struct list * );
struct list * push_front ( struct list * , int );
struct list * push_back ( struct list * , int );
struct list * delete_el ( struct list * );
void dispose_list ( struct list * );

#endif 