/* CH-230-A
   a8 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

/*
Function declarations and struct definition

push - Pushes an element into the stack
pop - Pops an element off the stack
empty - Empties the whole stack
isEmpty - Checks if the stack is empty

*/

struct stack {
    unsigned int count;
    int array[12]; // Container
};

void push(struct stack *my_stack, int nr);

void pop(struct stack *my_stack);

void empty(struct stack *my_stack);

int isEmpty(struct stack *my_stack);
