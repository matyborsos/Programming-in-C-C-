/* CH-230-A
   a1_pt5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int x = 2138;
    float y = -52.358925;

    printf("x=%9d\n", x); // prints the value of x over 9 places
    printf("y=%11.5f\n", y); // prints the value of y over 11 places and with a floating point precision of 5

    char z='G';

    printf("z=%c\n", z); // prints the character hold by the variable 'z' on the screen

    double u = 61.295339687;

    printf("u=%.7lf\n", u); // prints the value of u with a floating point precision of 7.


    return 0;

}
