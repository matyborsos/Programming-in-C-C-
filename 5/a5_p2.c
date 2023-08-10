/* CH-230-A
   a5 p2.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

void divby5(float arr[], int size);

int main(){

    float arr[]={5.5, 6.5, 7.75, 8.0, 9.6, 10.36};
    int i;
    printf("Before:\n");
    for (i = 0; i < 6; i ++) {
        printf("%.3f ", arr [i]) ;
        // prints the elements of the array before the division
    }
    printf("\n");
    // calls the function
    divby5(arr, 6);
    printf("After:\n");
    for (i = 0; i < 6; i ++) {
        printf("%.3f ", arr [i]) ;
        // prints the elements of the array after the division
    }
    printf("\n");
    return 0;
}

void divby5(float arr[], int size){

    int i;
    for(i = 0; i <= size; i++)
        arr[i] = arr[i] / 5.0;
    // the original value is divided by 5
}
