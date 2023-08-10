/* CH-230-A
   a1_pt6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    char c;

    scanf(%c, &c);

    printf("%c\n", c+3); // prints on the screen the third character (within the alphabet) after c as a character

    int code = (int) c; // initializing the new variable 'code' with the ASCII code of the character 'c'

    printf("%d\n", code+3); // prints the corresponding ASCII code of the the third character (within the alphabet) after c as a character using only arithmetic operations.

    return 0;

}

