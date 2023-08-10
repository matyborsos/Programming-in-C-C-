/* CH-230-A
   a6 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

#define LSB( N ) ( N&1 )
// compares the last bit, the least significant, with 1

int main() {

    char c;
    scanf ("%c", &c);
    // reads the character,  an unsigned char from the standard input
    printf("The decimal representation is: %d\n", (int) c);
    // prints the decimal representation of the unsigned char
    printf("The least significant bit is: %d\n", LSB((int) c));
    // prints the least significant bit (which is either 1 or 0)
    return 0;
}
