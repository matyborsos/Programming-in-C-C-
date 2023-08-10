/* CH-230-A
   a5 p9c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void read_3darray( int ***array3d , int n , int m, int p ){

    int i, j, k;
    for( i=0; i<n; i++)
        for( j=0; j<m; j++)
            for( k=0; k<p; k++)
                scanf("%d", &array3d[i][j][k]);
                // reads the elements of the 3d array

}

void print_3darray( int ***array3d , int n , int m, int p){

    int i, j, k;
    for( k=0; k<p; k++)
        {
            printf("Section %d:\n", k+1);
            for( i=0; i<n; i++){
                for( j=0; j<m; j++)
                    printf("%d ", array3d[i][j][k]);
                printf("\n");
            }
        }
    // prints the 3d array
}

int main() {

    int ***array3d, n, m, p, i, j;
    scanf ("%d", &n);
    scanf ("%d", &m);
    scanf ("%d", &p);
    // the program reads n, m and p corresponding 
    // to the dimensions of the 3d array
    array3d = ( int ***) malloc ( sizeof ( int **) * n) ;
    if ( array3d == NULL )
        exit (1) ;
    for ( i = 0; i < n; i ++) {
        array3d [ i ] = ( int **) malloc ( sizeof ( int *) * m) ;
        if ( array3d [ i ] == NULL )
            exit (1) ;
    }
    for ( i = 0; i < n; i ++)
        for( j = 0; j < m; j++) {
            array3d [ i ][ j ] = ( int *) malloc ( sizeof ( int ) * p) ;
            if ( array3d [ i ][ j ] == NULL )
                exit (1) ;
    }
    // the program allocates memory for the 3d array of integers
    // entered from the keyboard
    // calls the functions for reading the 3d array
    read_3darray( array3d, n , m, p );
    // prints the sections on the screen, using the print function
    print_3darray( array3d, n, m, p);
    for ( i = 0; i < n; i ++){
        for( j = 0; j < m; j++)
            free ( array3d [ i ][ j ]);
        free ( array3d [ i ]);
    }
    free ( array3d );
    // releases the memory
    return 0;
}
