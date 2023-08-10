/* CH-230-A
   a4 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_consonants(char str[]);

int main() {
    char str[101];
    fgets(str, sizeof(str), stdin);
    while (str[0]!= '\n') {
        printf("Number of consonants=%d\n", count_consonants(str));
        // prints the number of consonants in the entered string
        fgets(str, sizeof(str), stdin);
    }
    return 0;
}

int count_consonants(char str[])
{
    int idx=0, count=0;
    int code;
    for (idx = 0; idx < strlen(str) - 1; idx++){
        code = (int) str[idx];
        if(strchr("aeiouAEIOU", str[idx]) == NULL && str[idx] != ' '
           && ((code>=65 && code<=90) || (code>=97 && code<=122)))
            // checks if str[idx] is not a vowel or a space
            count++; // if true, it increases the number of consonants
    }

    return count;
}
