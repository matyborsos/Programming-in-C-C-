/* CH-230-A
   a4 p10.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

void proddivpowinv(float a, float b, float *prod,
                   float *div, float *pwr, float *invb);

int main(){

    float a, b;
    float prod, div, pwr, invb;
    scanf("%f", &a);
    scanf("%f", &b);
    proddivpowinv(a, b, &prod, &div, &pwr, &invb);
    printf("The product of the numbers is: %f\n", prod);
    // returns the product of the two floats
    printf("The division of the two floats is: %f\n", div);
    // returns the division of the two floats
    printf("The result of a^b is: %f\n", pwr);
    // returns the result of a to the power b
    printf("The inverse of b is: %f\n", invb);
    // returns the inverse of b
    return 0;
}

void proddivpowinv(float a, float b, float *prod,
                   float *div, float *pwr, float *invb){

    *prod = a * b;
    *div = a / b;
    *pwr = pow(a, b);
    *invb = 1 / b;
}
