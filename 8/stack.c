/* CH-230-A
   a8 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <limits.h>
#include "stack.h"

void push(struct stack *my_stack, int number) {
    if((*my_stack).count == 12)
        // checks if the stack is full
        printf("Stack Overflow\n");
    else {
        (*my_stack).array[(*my_stack).count] = number;
        // places value inside the stack stack
        (*my_stack).count++;
    }
}

void pop(struct stack *my_stack) {
    printf("Popping ");
    if(isEmpty(my_stack) == 1)
        // checks if the stack is empty with isEmpty
        printf("Stack Underflow\n");
    else {
        printf("%d\n", (*my_stack).array[(*my_stack).count - 1]);
        (*my_stack).array[(*my_stack).count - 1] = UINT_MAX;
        (*my_stack).count--;
    }
}

void empty(struct stack *my_stack) {
    int i;
    for(i = (*my_stack).count - 1; i >= 0; i--){
        printf("%d", (*my_stack).array[(*my_stack).count - 1]);
        (*my_stack).array[(*my_stack).count - 1] = UINT_MAX;
        (*my_stack).count--;
    }
    printf("\n");
}

int isEmpty(struct stack *my_stack) {
    if((*my_stack).count == 0)
        return 1;
    else return 0;
}
