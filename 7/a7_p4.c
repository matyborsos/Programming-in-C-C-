/* CH-230-A
   a7 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>

void a ( char a[100] ) {
    int i;
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL)
    {
        printf (" Error allocating memory \n");
        exit(1);
    }
    strcpy(string_copy, a);
    for( i = 0; i < strlen(string_copy); i++)
        printf("%c", toupper(string_copy[i]));
    printf("\n");
    // converting all the characters of the given string into upper cases
    // then it prints them
    free(string_copy);
}
void b ( char a[100] ) {
    int i;
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL)
    {
        printf (" Error allocating memory \n");
        exit(1);
    }
    strcpy(string_copy, a);
    for( i = 0; i < strlen(string_copy); i++)
        printf("%c", tolower(string_copy[i]));
    printf("\n");
    // converting all the characters of the given string into lower cases
    // then it prints them
    free(string_copy);
}
void c ( char a[100] ) {
    char *string_copy = (char *) malloc(sizeof(char) * 100);
    if(string_copy == NULL)
    {
        exit(1);
    }
    strcpy(string_copy, a);
    int i = 0;
    for( i = 0; i < strlen(string_copy); i++)
        if ( (int) a[i] <= 90 ) // checks if the character is upper case
            printf("%c", tolower(string_copy[i]));
            // if it is, the function prints
            // the lower case version of the character
        else
            printf("%c", toupper(string_copy[i]));
            // if it is not, then it is lower case
            // so the function prints the upper case version of the character
    printf("\n");
    free(string_copy);
}

void (*func_arr[3]) (char string[100]) = {a, b, c};
// defines a array of three pointer functions having a char as parameter


int main () {

    int nr;
    char string[100];
    fgets(string, sizeof(string), stdin);
    string[strcspn(string, "\n")] = 0;
    // reads the string
    scanf("%d", &nr);
    // reads the first number
    while( nr != 4 ){ // checks if it is not 4
        (*func_arr[nr - 1]) (string);
        // it executes the function corresponding to the
        // number that was read
        scanf("%d", &nr);
        // then we read a new number
    }
    // the while continues until 4 is read from the standard input
    return 0;

}
