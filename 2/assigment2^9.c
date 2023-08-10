/* CH-230-A
   a2_p9.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char c;
    scanf("%c", &c);

    int code = (int) c;
    //the variable 'code' remembers the ASCII code of the caracter c
    if ( code>=48 && code<=57 )
        printf("%c is a digit\n", c);
        //the program prints this if c is a digit
    else if ( (code>=65 && code<=90) || (code>=97 && code<=122) )
            printf("%c is a letter\n", c);
            //the program prints this if c is a letter
         else
            printf("%c is some other symbol\n", c);
            //the program prints this if c is some other symbol

    return 0;
}
