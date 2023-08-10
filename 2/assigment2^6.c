/* CH-230-A
   a2_p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    double x, y;

    scanf("%lf", &x);
    scanf("%lf", &y);

    double *ptr_one, *ptr_two, *ptr_three;

    ptr_one = &x;
    ptr_two = &x;
    ptr_three = &y;

    printf("The Memory Address of ptr_one: %p\n", ptr_one);
    //prints the memory address that ptr_one contains
    printf("The Memory Address of ptr_two: %p\n", ptr_two);
    //prints the memory address that ptr_two contains, equal to the first one
    printf("The Memory Address of ptr_three: %p\n", ptr_three);
    //prints the memory address that ptr_three contains, a different one

    return 0;

}
