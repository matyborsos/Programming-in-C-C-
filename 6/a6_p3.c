/* CH-230-A
   a6 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

#define MAX(A, B, C) {(((A) > (B) && (A) > (C))\
                      ? (A) : (((B) > (C) && (B) > (A)) ? (B) : (C)));}
//determinates the maximum number out of three values
#define MIN(A, B, C) {(((A) < (B) && (A) < (C))\
                      ? (A) : (((B) < (C) && (B) < (A)) ? (B) : (C)));}
//determinates the minimum number out of three values
#define MID_RANGE(A, B, C) ( ((MIN(A, B, C))+ (MAX(A, B, C)))/ (2.0) )
//determinates the mid-range of three values

int main() {

    int  i1, i2, i3;
    scanf ("%d", &i1);
    scanf ("%d", &i2);
    scanf ("%d", &i3);
    // the program scans the 3 integers
    // and then prints on the screen the mid-range as a
    // floating number with a floating point precision of 6
    printf("The mid-range is: %.6f\n", MID_RANGE(i1, i2, i3));
    return 0;
}
