/* CH-230-A
   a5 p10.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int print(int x){

    if(x == 1) return 1;
    // if x gets to 1 the recursive function stops and returns 1
    printf("%d ", x);
    // if x is different than 1 the function prints x
    x--;
    // the value of x is decreased
    // and then the function returns a new call of itself
    // with the modified x
    return print(x);

}

int main(){

    int x;
    scanf("%d", &x);
    printf("%d", print(x));
    // the main function will print 1, 
    // the last value, that the function will return
    // all the other numbers from x to 2 will be printed 
    // from inside the function
    return 0;
}
