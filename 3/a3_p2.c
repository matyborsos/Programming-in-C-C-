/* CH-230-A
   a3 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

int main(){

    char ch;
    int n;
    scanf("%c", &ch);
    // reads ch
    scanf("%d", &n);
    // reads n
    int i;
    for(i=0; i<=n; i++)
        printf("%c ", ch-i);
        // prints on the screen n+1 characters strating from ch 
        // to the character n positions behind ch in the alphabet
    return 0;
}
