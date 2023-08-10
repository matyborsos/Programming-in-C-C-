/* CH-230-A
   a3 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

float convert (int cm);

int main(){

    int cm;
    scanf("%d", &cm);
    // reads cm
    printf("Result of conversion: %f\n", convert(cm));
    // prints on the screen the converted length 
    // that is entered from the keyboard from cm to km
    return 0;
}

float convert (int cm){

    float km = cm * 1.0;
    // km will remember the float value of cm
    int i;
    for(i=1; i<=5; i++)
        km = km / 10;
    // the original value in converted from cm to km
    return km;
}
