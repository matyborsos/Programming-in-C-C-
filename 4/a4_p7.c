/* CH-230-A
   a4 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

void print_matrix(int n, int matrix[31][31]);
void under(int n, int matrix[31][31]);

int main(){

    int n, matrix[31][31], i, j;
    scanf("%d", &n);
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            scanf("%d", &matrix[i][j]);
    }
    printf("The entered matrix is:\n");
    print_matrix(n, matrix);
    // the function prints on the screen the matrix with
    // the data that was entered
    printf("Under the main diagonal:\n");
    under(n, matrix);
    return 0;
}


void print_matrix(int n, int matrix[31][31]){

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<n; j++)
            printf("%d ", matrix[i][j]);
            // prints all the elements in the matrix on row i
        printf("\n");
        // goes for a new line/row
        }
}

void under(int n, int matrix[31][31]){

    int i, j;
    for(i=1; i<n; i++){
        for(j=0; j<i; j++)
            printf("%d ", matrix[i][j]);
        // prints all the elements of the matrix which
        // are under the main diagonal
        }
    printf("\n");
}
