/* CH-230-A
   a2_p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int a;
    scanf("%d", &a);
    printf("a=%d\n", a);
    //prints the value of a on the screen

    int *ptr_a;
    ptr_a = &a;
    printf("Address of a: %p\n", ptr_a);
    //prints the address contained in the pointer variable on the screen

    *ptr_a= *ptr_a + 5;
    //increases the value of a by 5 by using the pointer variable

    printf("Value of a: %d\n", *ptr_a);
    //prints the modified value of the variable on the screen
    printf("Address of a: %p\n", ptr_a);
    //print the address of the variable on the screen

    return 0;

}
