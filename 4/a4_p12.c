/* CH-230-A
   a4 p12.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

void replaceAll(char *str, char c, char e);

int main() {
    char str[81];
    char c, e, str1[] = "stop";
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;
    while (strcmp(str, str1) != 0) { // verifies if the entered string
                                    // is different then "stop"
        scanf("%c", &c);
        getchar();
        scanf("%c", &e);
        printf("Before the replacement: %c, %c, %s\n", c, e, str);
        // prints the character to be replaced, the replacing character
        // and the strings on the screen
        // from the main function, before the replacement
        replaceAll(str, c, e);
        // replaces all the characters c in the string str
        // whit the characters e
        printf("After the replacement: %c, %c, %s\n", c, e, str);
        // prints the character to be replaced, the replacing character
        // and the strings on the screen from
        // the main function after the replacement
        getchar();
        fgets(str, sizeof(str), stdin);
        str[strcspn(str, "\n")] = 0;
        // reads a new string
    }
    // if the entered string is "stop', the reading stops
    return 0;
}

void replaceAll(char *str, char c, char e){

    int idx=0;
    for (idx = 0; idx < strlen(str) ; idx++)
        if(str[idx] == c)
            // checks if str[idx] is the character we are looking for
            str[idx] = e; // if true, it replaces it whit the other character
}
