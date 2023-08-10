/* CH-230-A
   a2_p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    float a, b, h;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &h);

    printf("square area=%f\n", a*a);
    // prints the areas of the square with the side a
    printf("rectangle area=%f\n", a*b);
    // prints the areas of the rectangle with the length a and the width b
    printf("triangle area=%f\n", (a*h)/2);
    // prints the areas of a triangle with the base a and the height h
    printf("trapezoid area=%f\n", ((a+b)*h)/2);
    // prints the areas of a trapezoid with the bases a, b and the height h

    return 0;

}
