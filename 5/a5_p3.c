/* CH-230-A
   a5 p3c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int count_lower(char* str);

int main() {
    char str[51];
    fgets(str, sizeof(str), stdin);
    while (str[0]!= '\n') {
        printf("Number of lowercase characters=%d\n", count_lower(str));
        // prints the number of lowercase characters in the entered string
        fgets(str, sizeof(str), stdin);
    }
    return 0;
}

int count_lower(char* str)
{
    char *str_ptr = str;
    int idx, count=0;
    int code;
    for (idx = 0; idx < strlen(str) - 1; idx++){
        code = (int) str[idx];
        if( *(str_ptr+idx) != ' ' &&  (code>=97 && code<=122))
            // checks if str[idx] is lowercase character and not a space
            // using  a pointer and address arithmetic
            count++; //if true, it increases the number of lowercase characters
    }
    return count;
}
