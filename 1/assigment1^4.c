/* CH-230-A
   a1_p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int x = 17;
    int y = 4;

    printf("x=%d\n", x); // prints x
    printf("y=%d\n", y); // prints y
    printf("sum=%d\n", x+y); // prints the sum of x and y
    printf("product=%d\n", x*y); // prints the product of x and y
    printf("difference=%d\n", x-y); // prints the difference of x and y

    float div = (float) x/y; // created a new floating point number div and gave it the floating value of the division of x and y

    printf("division=%f\n", div); // prints div a float
    printf("remainder of division=%d\n", x%y); // computes the remainder of the division of x and y in this order and prints the result.

    return 0;

}
