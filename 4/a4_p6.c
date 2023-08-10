/* CH-230-A
   a4 p6c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void two_greatest_values( int * dyn_array, int n ){

    int a = dyn_array[0];
    int b = dyn_array[1];
    int c=2, i;
    while(a==b){
        b = dyn_array[c];
        c++;
    } // gives be a different value than a
    for(i=c; i<n; i++){
        if(dyn_array[i]>a && dyn_array[i]>b
           && dyn_array[i]!=a && dyn_array[i]!=b){
               // checks if there is a bigger value than a and b
               // in the string, and then gives that value to a
               // which should greater number than b, and b the
               // value that was in a
            b = a;
            a = dyn_array[i];
        }
        else
            if(dyn_array[i] > b && dyn_array[i]!=b){
                // checks if there is a bigger value than b in the string,
                // but not bigger than a, and gives that value to b
                b = dyn_array[i];
            }
    }
    printf("The two greatest values are %d and %d\n", a, b);
    // it prints in the end the two greatest values in the string (a > b)
}

int main() {

    int * dyn_array, n, i;
    scanf ("%d", &n) ;
    dyn_array = (int *) malloc ( sizeof (int) *n );
    // the program allocates memory for an array of integers
    // entered from the keyboard
    if (dyn_array == NULL)
        exit (1);
        // checks if there were no errors
    for (i = 0; i < n; i ++) {
        scanf ("%d", & dyn_array [i]);
        // scans the elements in the array
    }
    // calls the function
    two_greatest_values(dyn_array, n);
    free(dyn_array);
    // releases the memory
    return 0;
}

