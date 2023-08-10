/* CH-230-A
   a2_p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int i = 8;
    while (i >= 4) {
        printf("i is %d\n", i);
        i--;
    }
    /* The program below prints 'i is 8' until you stop the execution
       because only one of the intended statements will be executed 
       as the {} are missing. The second one won't be executed 
       inside the loop, the value of 'i' won't change so the 
       condition inside while will always be true. To fix it the 
       brakets have to be added.
    */
    printf("That's it.\n");
    return 0;
}
