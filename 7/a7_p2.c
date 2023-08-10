/* CH-230-A
   a7 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

struct list {
    char info ;
    struct list * next ;
    struct list * prev ;
};

// prints the list in the correct order
void print_list ( struct list * my_list ) {
    struct list * cursor = my_list;
    while ( cursor != NULL ) {
        printf ("%c " , cursor -> info );
        cursor = cursor -> next ;
    }
    printf("\n");
}

// prints the list backwards
void print_list_back ( struct list * my_list ) {
    struct list * cursor = my_list;
    while ( cursor -> next != NULL )
        cursor = cursor -> next ;
    while ( cursor != NULL ){
        printf ("%c " , cursor -> info );
        cursor = cursor -> prev;
    }
    printf("\n");
}


// adds an element in front of the list
struct list * push_front ( struct list * my_list , int value ) {
    struct list * newel;
    newel = ( struct list *) malloc ( sizeof ( struct list ));
    if ( newel == NULL ) {
        printf (" Error allocating memory \n");
        return my_list ;
    }
    newel -> info = value ;
    newel -> prev = NULL;
    if(my_list == NULL)
        newel -> next = NULL;
    else {
        newel -> next = my_list;
        my_list -> prev = newel;
    }
    return newel ;
}

// deletes all the appearances of the given character from the list
struct list * delete_all_el ( struct list *my_list, char ch ) {
    if ( my_list == NULL )
        return my_list ;
    struct list *cursor = my_list;
    struct list *tmp = NULL;
    while(cursor != NULL){
            if(cursor -> info == ch){
                tmp = cursor;
                if(tmp == my_list)
                {
                    if(cursor -> next != NULL)
                    {
                        cursor = cursor -> next;
                        my_list = my_list -> next;
                        my_list -> prev = NULL;
                        free(tmp);
                    }
                    else
                    {
                        free(tmp);
                        my_list = NULL;
                        return my_list;

                    }
                }
                else
                    if(cursor -> next != NULL)
                    {
                        cursor -> prev -> next = cursor -> next;
                        cursor -> next -> prev = cursor -> prev;
                        cursor = cursor -> next;
                        free(tmp);
                    }
                    else
                    {
                        cursor -> prev -> next = NULL;
                        cursor = cursor -> next;
                        free(tmp);
                    }
            }
            else
                cursor = cursor -> next;
    }
    return my_list;
}

// disposes the doubly linked list
void dispose_list ( struct list * my_list ) {
    struct list * nextelem ;
    while ( my_list != NULL ) {
        nextelem = my_list -> next ;
        free ( my_list ) ;
        my_list = nextelem ;
    }
}

int main (){

    int c, ct;
    char next ;
    scanf ("%d", &c);
    // reads the first number outside the while loop
    struct list * my_list = NULL;
    // creates the list, empty at the moment

    while( c != 5 ) // stops if 5 is read from the keyboard
    {
        switch(c) {
        case 1:
            getchar();
            scanf ("%c", &next);
            my_list = push_front ( my_list , next) ;
            // add the following number (read as next from the keyboard)
            // to the beginning of the list
            break;
        case 2:
            getchar();
            scanf ("%c", &next);
            struct list * cursor;
            ct = 0;
            cursor = my_list;
            while(cursor != NULL){
                if(cursor -> info == next)
                    ct++;
                cursor = cursor -> next;
            }
            if(ct == 0){
                printf("The element is not in the list!\n");
                break;
                // prints this if the element is not in the list
            }
            my_list = delete_all_el ( my_list , next) ;
            // removes all the appearances of the given character from the list
            break;
        case 3:
            print_list ( my_list ) ;
            // prints the doubly linked list
            break;
        case 4:
            print_list_back ( my_list ) ;
            // prints the doubly linked list backwards
        }
        scanf ("%d", &c);
    }
    dispose_list ( my_list );
    // frees the memory used by the list and quits the execution of the program
    return 0;
}
