/* CH-230-A
   a3 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, int m, char c);

int main(){

    int n, m;
    char c;
    scanf("%d", &n);
    scanf("%d", &m);
    getchar();
    scanf("%c", &c);
    // reands n,m and c from the keyboard
    print_form (n, m, c);
    // the function prints on the screen the form made with 
    // the data that was entered
    return 0;
}

void print_form(int n, int m, char c){

    int i, j;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%c", c);
            // prints the characters on the row
        printf("\n");
        // goes for a new line/row
        m++;
        // increases m every time so every row has one more character 
        }
}
