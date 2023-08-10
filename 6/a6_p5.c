/* CH-230-A
   a6 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main (){

    unsigned char c;
    int n,i;
    scanf ("%c", &c);
    // the program reads the value for the character c
    n = c;
    // gives n the integer value of the character c
    printf("The decimal representation is: %d\n", n );
    // prints the decimal representation of the character c
    printf("The backwards binary representation is: ");
    for (i = 0; (1<<i)<n ; i ++) // (1<<i) represents 2 to the power of i
        printf("%d", ((n>>i)&1)); // compares every bit with one
                                  // from right to left
                                  // and then prints on the screen the result
    // so, it prints the backwards binary representation of the read character
    printf("\n");
    return 0;
}
