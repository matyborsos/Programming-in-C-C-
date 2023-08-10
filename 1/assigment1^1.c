/* CH-230-A
   a1 p1.c
   Borsos Matheas Roland
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {
    double result;
    /* The result of our calculation */
    result = (3.0 + 1.0) / 5.0;
    /* The result is 0.000 because (3 + 1) and 5 are integers and if we divide two integers the result will also be an integer
       In order to fix it we have to add a .0 at their end of our values so then the result will be double */
    printf("The value of 4/5 is %lf\n", result);
    return 0;
}

