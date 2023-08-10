/* CH-230-A
   a3 p11.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>

int main(){

    char one[100], two[100], three[100];

    scanf("%[^\n]%*c", one);
    scanf("%[^\n]s*c", two);
    getchar();

    int compareResult = strcmp(one, two); // Compare strings before concat

    // Print length of one and two
    printf("length1=%d\nlength2=%d\n", (int) strlen(one), (int) strlen(two));

    strcat(one, two);
    printf("concatenation=%s\n", one);

    strcpy(three, two);
    printf("copy=%s\n", three); // prints the copy of two

    // Print different output varying from the return value of strcmp
    if(compareResult < 0){
        printf("one is smaller than two\n");
    } else if (compareResult > 0) {
        printf("one is larger than two\n");
    } else printf("one is equal to two\n");

    char c;
    char *pos;
    scanf("%c", &c);
    pos = strchr(two, c);
    if(pos != NULL )
        printf("position=%lu\n", strlen(two)-strlen(pos));
        // prints the position of c
    else
        printf("The character is not in the string\n");
        // prints this if c is not in the string

    return 0;
}

