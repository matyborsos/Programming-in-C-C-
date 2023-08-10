/* CH-230-A
   a4 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

int main(){

    float l, u, s;
    scanf("%f", &l);
    scanf("%f", &u);
    scanf("%f", &s);
    // reads the lower and upper limits
    // as well as a step size for the table from the keyboard
    float x;
    for(x=l; x<=u; x=x+s){
        printf("%f ", x);
        // prints the radius of the circle
        printf("%f ", x * x * M_PI);
        // prints the area of the circle with radius x
        printf("%f", 2 * M_PI * x);
        // prints the perimeter of the circle with radius x
        printf("\n");
        }
    return 0;
}
