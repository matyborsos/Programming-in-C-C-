/* CH-230-A
   a1_p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h> // added '#' at the beginning

int main() {

    float result; /* The result of the division*/
    int a = 5;
    float b = 13.5; // changed int to float
    result = a / b;
    printf("The result is %f\n", result); // changed %d to %f

    /* The first error of the program was the missing "#" before "include" at the beginning of the program.
       The second one was the wrong type of the variable 'b', it should have been float not int since its value has a decimal point.
       The third mistake was using %d instead of %f in the printf function as 'results' is a floating point number.
    */

    return 0;
}
