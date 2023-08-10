/* CH-230-A
   a7 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int main() {
    char ch;
    int nr;
    struct stack my_stack;
    my_stack.count = 0;
    // count holds the number of elements in the stack
    scanf("%c", &ch);
    while( ch != 'q' ){ // loops until 'q' is read
        switch(ch){
            case 's':
                scanf("%d", &nr);
                getchar();
                push(&my_stack, nr);
                // pushes an element into the stack
                break;
            case 'p':
                pop(&my_stack);
                // pops an element off the stack
                break;
            case 'e':
                empty(&my_stack);
                // empties the whole stack
                break;
        }
        scanf("%c", &ch);
        // reads a new character
    }
    printf("Quit\n");
    return 0;
}
