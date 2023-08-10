/* CH-230-A
   a6 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#define SWAP(A, B, T) { T AUX; (AUX) = (A); (A) = (B); (B) = (AUX); }

int main() {

    int  i1, i2;
    double d1, d2;
    scanf ("%d", &i1);
    scanf ("%d", &i2);
    scanf ("%lf", &d1);
    scanf ("%lf", &d2);
    // scans the two integers and the two doubles
    SWAP(i1, i2, int);
    // applies the SWAP macro to the integers
    SWAP(d1, d2, double);
    // applies the SWAP macro to the doubles
    printf("After swapping:\n");
    printf("%d\n", i1);
    printf("%d\n", i2);
    printf("%.6lf\n", d1);
    printf("%.6lf\n", d2);
    // prints the results after swapping/applying the macro
    return 0;
}
