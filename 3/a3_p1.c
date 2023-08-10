/* CH-230-A
   a3 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    float x;
    int n;
    scanf("%f", &x);
    scanf("%d", &n);

    while(n<=0){ //in case n is not valid
        printf("Input is invalid, reenter value\n");
        scanf("%d", &n);
        //the process is repeted until a valid value will be entered
    }
    int i;
    for(i=1; i<=n; i++)
        printf("%f\n", x);
        //prints x n times

    return 0;
}
