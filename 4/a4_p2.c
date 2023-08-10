/* CH-230-A
   a4 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){

    char line[51];
    fgets(line, sizeof(line), stdin);
    line[strcspn(line, "\n")] = 0;
    // reads the string from the keyboard
    int i;
    for(i=0; i<strlen(line); i++){
        if(i % 2 == 0)
            printf("%c\n", line[i]);
            // prints the character on the left side
        else
            printf(" %c\n", line[i]);
            // prints the character on the right side
        }
    return 0;
}

