/* CH-230-A
   a5 p11.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int prim(int x, int d){

    if( x == 1 || x == 0 || x < 0) return 0;
    //if x is equal to 0 or 1 or a negative number the function has to return 0
    //because 0 and 1 are not prime, neither are negative numbers
    if( d == x ) return 1;
    // if d gets to be equal to x 
    // then x has no other divisor than 1 and itself, so x is prime
    // and the function returns 1
    if( x % d == 0 )
        return 0;
        // if x is divisible by d
        // then x has other divisors different than 1 and itself,
        // so x is not prime and the function returns 0
    else
    {
        d++;
        // if x is not divisible by d, the value of d is increased by 1
        return prim(x, d);
    }
}

int main(){

    int x;
    scanf("%d", &x); // reads x
    if( prim(x, 2) == 1 )
        printf("%d is prime\n", x);
        // prints this if the funtion returns 1 (the number is prime)
    else
        printf("%d is not prime\n", x);
        // prints this if the funtion returns 0 (the number is not prime)
    return 0;
}
