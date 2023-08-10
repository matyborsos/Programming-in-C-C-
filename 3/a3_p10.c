/* CH-230-A
   a3 p10.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
int i, n;
float a, b, p;
float product(float a, float b);
void productbyref(float a, float b, float *p);
void modifybyref(float *a, float *b);

int main(){

    scanf("%f", &a);
    scanf("%f", &b);
    printf("The product of the numbers is: %f\n", product(a, b));
    // returns the product of the two floats
    productbyref(a, b, &p);
    // prints the product of the two floats,
    // and returns it  by reference
    modifybyref(&a, &b);
    // prints the modified values of the two floats
    return 0;
}

float product(float a, float b){

    return a*b;
}

void productbyref(float a, float b, float *p){

    *p = a*b;
    printf("The product of the numbers is: %f\n", *p);
}

void modifybyref(float *a, float *b){

    *a = *a + 3;
    *b = *b + 11;
    printf("The new value of the first float is: %f\n", *a);
    printf("The new value of the second float is: %f\n", *b);
}

