/* CH-230-A
   a6 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

void set3bits(unsigned char *ch, int b1, int b2, int b3)
{
    int n = (int)*ch;
    // gives n the integer value of ch, the character, its ASCII code
    n |= (1<<b1);
    n |= (1<<b2);
    n |= (1<<b3);
    // sets the bits on the given positions to 1
    *ch = (char)n;
}

int main (){

    unsigned char c;
    int n,i,b1,b2,b3;
    scanf ("%c", &c);
    // the program reads the value for the character c
    scanf ("%d%d%d", &b1,&b2,&b3);
    // the program reads the values for the 3 bits that are to be set to 1
    n = (int) c;
    // gives n the integer value of c, the character, its ASCII code
    printf("The decimal representation is: %d\n", n);
    // prints the decimal representation of the character c
    printf("The binary representation is: ");
    for (i = 7; i >= 0 ; i --)
        printf("%d", ((n>>i)&1));
    printf("\n");
    // prints the binary representation of the character c
    printf("After setting the bits: ");
    set3bits(&c,b1,b2,b3);
    // sets the bits to 1
    n = (int) c;
    for (i = 7; i >= 0 ; i --)
        printf("%d", ((n>>i)&1));
        // and prints the new representation after the setting
    printf("\n");
    return 0;
}
