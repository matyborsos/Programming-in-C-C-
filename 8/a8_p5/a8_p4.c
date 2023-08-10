/* CH-230-A
   a8 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main (){
    char ch1, ch2;
    FILE * fr ;
    fr = fopen ("chars.txt", "r"); // opens the input file
    if (fr) {
        // reads the first 2 characters of the file
        ch1 = getc(fr);
        ch2 = getc(fr);
    } else { // In case fopen was not successful
        printf(" Couldn't open file! ");
        exit(1);
    }
    fclose ( fr );
    FILE *fw;
	fw = fopen("codesum.txt", "w"); // opens output file
	fprintf(fw, "%d", (int) ch1 + (int) ch2);
    //writes to the file an integer
    // that is the sum of the ASCII codes of both chars
	fclose ( fw );
    return 0;
}
