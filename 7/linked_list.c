/* CH-230-A
   a7 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

void print_list ( struct list * my_list ) {
    while ( my_list != NULL ) {
        printf ("%d " , my_list -> info );
        my_list = my_list -> next ;
    }
}

struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> info = value ;
    newel -> next = my_list ;
    return newel ;
}

struct list * push_back ( struct list * my_list , int value ) {
    struct list * cursor , * newel ;
    cursor = my_list ;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> info = value ;
    newel -> next = NULL ;
    if ( my_list == NULL )
        return newel ;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    cursor -> next = newel ;
    return my_list ;
}

struct list * delete_el ( struct list * my_list ) {
    if ( my_list == NULL )
        return my_list ;
    if( my_list -> next == NULL ){
        my_list = NULL;
        return my_list;
    }
    struct list *relist;
    relist = my_list -> next;
    free(my_list);
    return relist;
}

void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}