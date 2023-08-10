/* CH-230-A
   a1_pt2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main() {

    int result; /* The result of our calculation */
    result = (2 + 7) * 9 / 3;
    printf("The result is %d\n", result);
    /*  The program print "The result is -1073745604" because the 'results' argument is missing from the printf function so a random value is printed
        To fix this mistake the 'results' has to be added as an argument of the printf function
    */

    return 0;
}

