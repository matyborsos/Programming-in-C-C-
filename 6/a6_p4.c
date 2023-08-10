/* CH-230-A
   a6 p4.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#define INTERMEDIATE

int main() {

    int  n, i, s = 0;
    scanf ("%d", &n);
    // reads the dimension of the vector
    int v1[n], v2[n];
    for(i = 0; i < n; i++)
        scanf ("%d", &v1[i]);
    // reads the components of the first integer vector
    for(i = 0; i < n; i++)
        scanf ("%d", &v2[i]);
    // reads the components of the second integer vector
    #if defined ( INTERMEDIATE )
        printf ("The intermediate product values are:\n");
        // prints this on the screen if INTERMEDIATE is defined
    #endif
    for(i = 0; i < n; i++){
        s = s + v1[i]*v2[i];
        // computes the scalar product of two n-dimensional integer vectors
        #if defined ( INTERMEDIATE )
            printf ("%d\n", v1[i]*v2[i] );
            // prints the intermediate product values,
            // if INTERMEDIATE is defined
        #endif
    }
    printf ("The scalar product is: %d\n", s);
    // prints the scalar product
    return 0;
}
