/* CH-230-A
   a5 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){

    char one[100], two[100];
    char *dyn_array;
    int size;
    fgets(one, sizeof(one), stdin);
    one[strcspn(one, "\n")] = 0;
    fgets(two, sizeof(two), stdin);
    two[strcspn(two, "\n")] = 0;
    size = strlen(one) + strlen(two) + 1;
    dyn_array = (char *) malloc ( sizeof (char) * size );
    // the program allocates memory for an array of chars
    // entered from the keyboard
    if (dyn_array == NULL)
        exit (1);
        // checks if there were no errors
    strcpy(dyn_array, strcat(one, two));
    // copies the result of the concatination in the 
    // dynamically allocated string dyn_array
    dyn_array[strcspn(dyn_array, "\n")] = 0;
    printf("Result of concatenation: %s\n", dyn_array);
    // prints the dynamically allocated string dyn_array
    free(dyn_array);
    // releases the memory
    return 0;
}
