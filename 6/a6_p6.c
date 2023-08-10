/* CH-230-A
   a6 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main (){

    unsigned char c;
    int n, i;
    scanf ("%c", &c);
    // the program reads the value for the character c
    n = (int) c;
    // gives n the integer value of the character c
    printf("The decimal representation is: %d\n", n);
    // prints the decimal representation of the character c
    printf("The binary representation is: ");
    for (i = 7; i >= 0 ; i --)
        printf("%d", ((n>>i)&1));// compares every bit with 1
                                 // from left to right
                                 // and then prints on the screen the result
    // so, it prints the binary representation of the read character
    printf("\n");
    return 0;
}
