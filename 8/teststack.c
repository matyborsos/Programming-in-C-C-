/* CH-230-A
   a8 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include "stack.h"

int main() {
    unsigned int nr, cnr;
    struct stack my_stack;
    my_stack.count = 0;
    // count holds the number of elements in the stack
    scanf("%d", &nr);
    // reads a positive decimal number stored in an unsigned int
    cnr = nr;
    // keeps a copy of the initial positive decimal number
    while( nr != 0 ) // loops till the number is 0
    {
        push(&my_stack, nr%2);
        // stores the remainder of the division by 2 in the stack
        nr = nr/2;
        // divides by 2 the number
    }
    printf("The binary representation of %d is: ", cnr);
    empty(&my_stack);
    // prints and empties the stack, the binary representation of the number
    return 0;
}
