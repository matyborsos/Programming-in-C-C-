/* CH-230-A
   a2_p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    int a;
    scanf("%d", &a);

    if( a%2==0 && a%7==0)
    //tests if a is divisible by 2 and 7
        printf("The number is divisible by 2 and 7\n");
        //the program prints this if the number is divisible by 2 and 7
    else
        printf("The number is NOT divisible by 2 and 7\n");
        //the program prints this if the number is not divisible by 2 and 7

    return 0;
}
