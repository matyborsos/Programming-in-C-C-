/* CH-230-A
   a3 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

float to_pounds(int kg, int g);

int main(){

    int kg, g;
    scanf("%d", &kg);
    scanf("%d", &g);
    float p = to_pounds (kg, g);
    printf("Result of conversion: %f\n", p);
    // prints the result of the function on the screen
    return 0;
}

float to_pounds(int kg, int g){

    float pounds = kg * 2.2 + g * 0.001 * 2.2;
    // converts kg from kilograms to pounds and g from grams to pounds
    // and also sums them up
    return pounds;
    // returns the value of pounds
}
