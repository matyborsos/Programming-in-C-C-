/* CH-230-A
   a8 p7.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main () {
    char ch;
    int i;
    FILE *FstF, *SndF, *out;
    char Fstf[101] ={0}, Sndf[101] ={0};

    // opens first file and reads the content line by line
    FstF = fopen("text1.txt", "r");
    if (FstF == NULL) { // checks if opening file wasn't successful
        printf("Some error occurred!\n");
        return 0;
    } else {
         i=0;
         while (( ch = getc ( FstF ) ) != EOF ) {
            strcat(Fstf, &ch);
         }
    }
    Fstf[strlen(Fstf)] = '\0';
    fclose(FstF);

    // opens the second file and reads the content line by line
    SndF = fopen("text2.txt", "r");
    if (SndF== NULL) { // checks if opening file wasn't successful
        printf("Some error occurred!\n");
        return 0;
    } else {
        while (( ch = getc ( SndF ) ) != EOF ) {
            strcat(Sndf, &ch);
         }
    }
    Sndf[strlen(Sndf)] = '\0';
    fclose(SndF);


    // prints on file the result of the merge
    out = fopen("merge12.txt", "w");
    fprintf(out, "%s\n", strcat(Fstf, Sndf));
    fclose(out);

    return 0;
}
