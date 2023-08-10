/* CH-230-A
   a5 p1.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>

void print_form(int n, char c);

int main(){

    int n;
    char c;
    scanf("%d", &n);
    getchar();
    scanf("%c", &c);
    // reads n and c from the keyboard
    print_form (n, c);
    // the function prints on the screen the form made with
    // the data that was entered
    return 0;
}

void print_form(int n, char c){

    int i, j, m = n;
    for(i=0; i<n; i++){
        for(j=0; j<m; j++)
            printf("%c", c);
            // prints the characters on the row
        printf("\n");
        // goes for a new line/row
        m--;
        // decreases m every time so every row has one less character
        }
}
