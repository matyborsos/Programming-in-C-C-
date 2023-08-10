/* CH-230-A
   a5 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>


int main() {

    int n, i;
    float arr[101];
    scanf("%d", &n);

    for( i = 0 ; i < n ; i++ )
        scanf("%f", &arr[i]);

    float* arr_ptr = (float*) arr;
    // gives the pointer the address of the first element in the array

    while ( *arr_ptr > 0 )
        arr_ptr++;
    // the program counts the number of elements in an array until encountering the first
    // negative value without the usage of any integer counter variables,
    // but with the usage of pointers and pointer arithmetic.

    if( arr_ptr - arr == 1 )
        printf("Before the first negative value: %ld element\n", arr_ptr - arr);
        // prints this if there is only 1 element
        // before the first negative value
    else
        printf("Before the first negative value: %ld elements\n", arr_ptr - arr);
        // prints this if there are none or 2 or more elements
        // before the first negative value
    return 0;
}
