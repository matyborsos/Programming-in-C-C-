/* CH-230-A
   a6 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    int info ;
    struct list * next ; /* self reference */
};

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

int main (){

    char c;
    int next;
    scanf ("%c", &c);
    // reads the first character outside the while loop
    struct list * my_list = NULL;
    // creates the list, empty at the moment
    while( c != 'q' ) // stops if 'q' is read from the keyboard
    {
        switch(c) {
        case 'a':
            scanf ("%d", &next);
            my_list = push_back ( my_list , next ) ;
            // add the following number (read as next from the keyboard)
            // to the end of the list
            break;
        case 'b':
            scanf ("%d", &next);
            my_list = push_front ( my_list , next ) ;
            // add the following number (read as next from the keyboard)
            // to the beginning of the list
            break;
        case 'r':
            my_list = delete_el ( my_list );
            // removes the first element from the list
            break;
        case 'p':
            print_list ( my_list ) ;
            printf("\n");
            // prints the linked list
            break;
        }
        scanf ("%c", &c);
    }
    dispose_list ( my_list );
    // frees the memory used by the list and quits the execution of the program
    return 0;
}
