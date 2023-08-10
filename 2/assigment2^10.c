/* CH-230-A
   a2_p10.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int n;
    scanf("%d", &n);

    while(n<=0){ //in case n is not valid
        printf("Invalid integer, enter another one: ");
        scanf("%d", &n);
        //the process is repeted until a valid value will be entered
    }

    printf("1 day = 24 hours\n");
    /*prints the different output for the first day,
      which should be printed all the time
      whatever is the value of n (valid value)
    */
    int i=2;
    /*if n>=2 the program continues to print on the screen
      as long as the value of the variable 'i' is <= n 
    */
    while (i<=n){
        printf("%d days = %d hours\n", i, i*24);
        i++;
    }
    return 0;
}
