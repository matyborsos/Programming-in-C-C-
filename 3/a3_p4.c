/* CH-230-A
   a3 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

// the program was always printing the position 0 because
// the for loop inside the function was doing nothing
// (also there should have been ' instead of ’)

int position(char str[], char c)
{
    int idx=0;
    /* Loop until end of string */
    for (idx = 0; str[idx] != c && str[idx] != '\0'; ++idx)
        if( str[idx+1] == c )
            // to fix it I added an if that checks if
            // the next character in the string is the one we are looking for
            return idx+1;
            // an the prints it (the position of 'g')
    return idx;
    // this case is if 'g' is at the beginning of the string
}
int main() {
    char line[80];
    while (1) {
        printf("Enter string:\n");
        fgets(line, sizeof(line), stdin);
        printf("The first occurrence of 'g' is: %d\n", position(line, 'g'));
        // prints the first occurrence of 'g' in the string
    }
    return 0;
}
