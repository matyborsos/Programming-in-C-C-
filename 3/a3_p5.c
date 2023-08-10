/* CH-230-A
   a3 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    char c;
    int n;
    scanf("%c", &c);
    scanf("%d", &n);
    float v[100], nr;
    int i;
    for(i=0; i<n; i++){
        scanf("%f", &nr);
        v[i] = nr;
    }
    float sum, f;
    switch(c) {
    case 's':
        sum = 0.0;
        for(i=0; i<n; i++)
            sum = sum + v[i];
        printf("%f", sum); // prints the sum of the temperatures
        break;
    case 'p':
        for(i=0; i<n; i++)
           printf("%f ", v[i]); // prints the temperatures
        break;
    case 't':
        for(i=0; i<n; i++){
            printf("%f ", v[i]);
            f = (9 * v[i]) / 5 + 32;
            printf("%f ", f);
        } // prints all temperatures in Fahrenheit
        break;
    default:
        sum = 0.0;
        for(i=0; i<n; i++)
            sum = sum + v[i];
        sum = sum/n;
        printf("%f", sum); // prints the average of the temperatures 
    }

    return 0;
}
