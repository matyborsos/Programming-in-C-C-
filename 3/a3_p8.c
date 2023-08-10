/* CH-230-A
   a3 p8.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
int i, n;
float nr, v[10], s, a;
void sum(float v[], int n);
void average(float v[], int n);

int main(){

    n=10;
    for(i=0; i<10; i++){
        scanf("%f", &nr);
        if ( nr == -99.0 )
        {
            n=i;
            break; // stops when the value -99.0 is entered
            // and doesn't add it to the array
        }
        v[i] = nr;
        // adds the values entered from the keyboard to the array
    }
    sum (v, n);
    // returns the sum of the elements in the array
    average (v, n);
    // returns the average of the elements in the array
    return 0;
}

void sum(float v[], int n){

    s = 0.0;
    for(i=0; i<n; i++){
        s = s + v[i];
        // calculates the sum of all the elements in the array
    }
    printf("The sum of all values: %f\n", s);
}

void average(float v[], int n){

    s = 0.0;
    for(i=0; i<n; i++)
        s = s + v[i];
        // calculates the sum of all the elements in the array
    a = s/n;
    // divides the sum to the number of elements of the array
    // to calculate the average
    printf("The average of all values: %f\n", a);
}
