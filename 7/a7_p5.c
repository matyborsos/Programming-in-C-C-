/* CH-230-A
   a7 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
int n, i;
int cmpfunc (const void * a, const void * b) {
   return ( *(int*)a - *(int*)b );
}
// used to sort ascending

int cmpfunc2 (const void * a, const void * b) {
   return ( *(int*)b - *(int*)a );
}
// used to sort descending

void (* func ) ( int array[n] ); // define pointer to function
void a ( int array[n] ) { // function that sorts the elements ascending
                          // and then prints them on the standard output
    qsort(array, n, sizeof(int), cmpfunc);
    for(i=0;i<n;i++)
        printf("%d ", array[i]);
    printf("\n");
}
void d ( int array[n] ) { // function that sorts the elements descending
                          // and then prints them on the standard output
    qsort(array, n, sizeof(int), cmpfunc2);
    for(i=0;i<n;i++)
        printf("%d ", array[i]);
    printf("\n");

}

int main () {

    int i;
    char c;
    scanf("%d", &n);
    // scans n
    int array[n];
    // initialize an array of n integers
    for(i=0;i<n;i++)
        scanf("%d", &array[i]);
        // reads the elements of the array
    scanf("%c", &c);
    // reads the first character outside the while loop
    while( c != 'e' ){ // loops until 'e' is read
        if( c == 'a' ){ // if 'a' is read then the sorting
                        // will be ascending
            func = a;
            func (array);
        }
        else
            if( c == 'd' ){ // if 'd' is read then the sorting
                            // will be descending
                func = d;
                func(array);
            }
        scanf("%c", &c);
        // reads a new character
    }
    return 0;

}
