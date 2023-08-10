/* CH-230-A
   a4 p9c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

int prodminmax( int arr[], int n ){

    int a = arr[0];
    int b = arr[1];
    int aux, i, p;
    if(a > b){
        aux = a;
        a = b;
        b = aux;
    } // checks if a is greater than b
    // because a should keep the minimum value in the array
    // and b the maximum
    for(i=2; i<n; i++){
        if(arr[i] < a)
            // checks if the value on position i in the array
            // is less than the value of a
            a = arr[i]; // if true, than this value becomes
                        // the new minimum value in the array
        else
            if(arr[i] > b)
            // checks if the value on position i in the array
            // is grater than the value of b
                b = arr[i]; // if true, than this value becomes
                            // the new maximum value in the array
    }
    p = a * b;
    // the value of p will be equal to the product of a and b
    // the minimum and the maximum value in the array
    return p;
}

int main() {

    int * arr, n, i;
    scanf ("%d", &n) ;
    arr = (int *) malloc ( sizeof (int) *n );
    // the program allocates memory for an array of integers
    // entered from the keyboard
    if (arr == NULL)
        exit (1);
        // checks if there were no errors
    for (i = 0; i < n; i ++) {
        scanf ("%d", & arr [i]) ;
        // scans the elements in the array
    }
    // calls the function and prints its value on the screen
    printf("The product is %d\n", prodminmax(arr, n));
    free(arr);
    // and then releases the memory
    return 0;
}

