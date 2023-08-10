/* CH-230-A
   a5 p8c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>

void read_matrix( int **matrix , int n , int m ){

    int i, j;
    for( i=0; i<n; i++)
        for( j=0; j<m; j++)
            scanf("%d", &matrix[i][j]); //reads the elements of the matrix

}

void print_matrix( int **matrix , int n , int m ){

    int i, j;
    for( i=0; i<n; i++)
        {
            for( j=0; j<m; j++)
                printf("%d ", matrix[i][j]);//prints the elements of the matrix
            printf("\n"); // new row
        }

}

void matrix_multiplication( int **matrix , int **matrix1,
                            int **matrix2, int n , int m, int p ){

    int i, j, k, s;
    for( i=0; i<n; i++)
        for( k=0; k<p; k++)
            {
                s = 0;
                for( j=0; j<m; j++)
                    s = s + matrix1[i][j] * matrix2[j][k];
                matrix[i][k] = s; 
                // s will hold every time the value 
                // of the elements of the new matrix,
                // made by multiplying the 2 matrices
            }

}

int main() {

    int **m1, **m2, **m3, n, m, p, i;
    scanf ("%d", &n);
    scanf ("%d", &m);
    scanf ("%d", &p);
    m1 = ( int **) malloc ( sizeof ( int *) * n) ;
    if ( m1 == NULL )
        exit (1) ;
    for ( i = 0; i < n; i ++) {
        m1 [ i ] = ( int *) malloc ( sizeof ( int ) * m) ;
        if ( m1 [ i ] == NULL )
            exit (1) ;
    }
    m2 = ( int **) malloc ( sizeof ( int *) * m) ;
    if ( m2 == NULL )
        exit (1) ;
    for ( i = 0; i < m; i ++) {
        m2 [ i ] = ( int *) malloc ( sizeof ( int ) * p) ;
        if ( m2 [ i ] == NULL )
            exit (1) ;
    }
    m3 = ( int **) malloc ( sizeof ( int *) * n) ;
    if ( m3 == NULL )
        exit (1) ;
    for ( i = 0; i < n; i ++) {
        m3 [ i ] = ( int *) malloc ( sizeof ( int ) * p) ;
        if ( m3 [ i ] == NULL )
            exit (1) ;
    }
    // the program allocates memory for the matrices
    // entered from the keyboard
    // calls the functions for reading the 3 matrices
    read_matrix( m1, n , m );
    read_matrix( m2, m , p );
    // calls the multiplication function
    matrix_multiplication( m3, m1, m2, n, m, p );
    // prints the matrices on the screen
    // and their multiplication
    printf("Matrix A:\n");
    print_matrix( m1, n, m );
    printf("Matrix B:\n");
    print_matrix( m2, m, p );
    printf("The multiplication result AxB:\n");
    print_matrix( m3, n, p );
    for ( i = 0; i < n ; i ++)
        free ( m1 [ i ]);
    free ( m1 );
    for ( i = 0; i < m ; i ++)
        free ( m2 [ i ]);
    free ( m2 );
    for ( i = 0; i < n ; i ++)
        free ( m3 [ i ]);
    free ( m3 );
    // releases the memory for all 3 dynamically alocated matrices
    return 0;
}
