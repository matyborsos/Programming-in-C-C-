/* CH-230-A
   a5 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void divby5(float arr[], int size);

int main(){

    float *arr;
    int n, i;
    scanf ("%d", &n) ;
    arr = (float *) malloc ( sizeof (float) *n );
    // the program allocates memory for an array of integers
    // entered from the keyboard
    if (arr == NULL)
        exit (1);
        // checks if there were no errors
    for (i = 0; i < n; i ++) {
        scanf("%f", & arr [i]) ;
        // scans the elements in the array
    }
    printf("Before:\n");
    for (i = 0; i < n; i ++) {
        printf("%.3f ", arr [i]) ;
        // prints the elements of the array before the division
    }
    printf("\n");
    // calls the function
    divby5(arr, n);
    printf("After:\n");
    for (i = 0; i < n; i ++) {
        printf("%.3f ", arr [i]) ;
        // prints the elements of the array after the division
    }
    printf("\n");
    free(arr);
    // and then releases the memory
    return 0;
}

void divby5(float arr[], int size){

    int i;
    for(i = 0; i <= size; i++)
        arr[i] = arr[i] / 5.0;
    // the original value in divided by 5
}
