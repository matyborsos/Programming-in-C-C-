/* CH-230-A
   a3 p9.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
int n, i;
double v[20];
double sum25(double v[], int n);

int main(){

    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%lf", &v[i]);
    printf("sum=%lf\n", sum25(v,n));
    // returns the sum of the elements on position 2 and 5 in the array,
    // if they exist
    return 0;
}

double sum25(double v[], int n){

    if( n<=5 ){
        printf("One or both positions are invalid\n");
        return -111;
        // prints -111 and returns this if at least one
        // of the positions 2 and 5
        // is not valid within the array
    }
    else
        return v[2]+v[5];
}
