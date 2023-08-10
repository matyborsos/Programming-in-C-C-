/* CH-230-A
   a4 p11c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

int count_insensitive(char str[], char c);

int main() {
    char str[51];
    fgets(str, sizeof(str), stdin);
    printf("The character 'b' occurs %d times.\n", count_insensitive(str,'b'));
    // prints the number of insensitive occurrences of 'b' the entered string
    printf("The character 'H' occurs %d times.\n", count_insensitive(str,'H'));
    // prints the number of insensitive occurrences of 'H' the entered string
    printf("The character '8' occurs %d times.\n", count_insensitive(str,'8'));
    // prints the number of insensitive occurrences of '8' the entered string
    printf("The character 'u' occurs %d times.\n", count_insensitive(str,'u'));
    // prints the number of insensitive occurrences of 'u' the entered string
    printf("The character '$' occurs %d times.\n", count_insensitive(str,'$'));
    // prints the number of insensitive occurrences of '$' the entered string
    return 0;
}

int count_insensitive(char str[], char c)
{
    int idx=0, count=0;
    int code = (int) c;
    for (idx = 0; idx < strlen(str) - 1; idx++){
        if(code>=65 && code<=90){
        // checks if c is a uppercase character
            if(str[idx] == c || str[idx] == tolower(c))
                // c is an upeprcase character, so the function checks if
                // str[idx], the character in the string str on position idx
                // is equal to c or the lowercase version of c
                count++; // if true, it increases the number of occurrences
        }
        else
            if(code>=97 && code<=122){
            // checks if c is a lowercase character
                if(str[idx] == c || str[idx] == toupper(c))
                // c is an lowercase character, so the function checks if
                // str[idx], the character in the string str on position idx
                // is equal to c or the uppercase version of c
                    count++; // if true, it increases the number of occurrences
            }
            else
                if(str[idx] == c)
                // c is just a symbol or a number so it has only one version
                    count++; // if true, it increases the number of occurrences

    }

    return count;
}
