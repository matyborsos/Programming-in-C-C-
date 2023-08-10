/* CH-230-A
   a7 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include "linked_list.h"

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
