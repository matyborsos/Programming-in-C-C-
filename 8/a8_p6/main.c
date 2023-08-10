/* CH-230-A
   a8 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
 */

#include <stdio.h>
#include <stdlib.h>

int main () {
    FILE *FstF, *SndF, *out;
    double d1, d2;
    char FstFN[32], SndFN[32];

    printf("Enter first filename: ");
    scanf("%s*c", FstFN);
    printf("Enter second filename: ");
    scanf("%s", SndFN);

    // opens first file and reads the double value inside
    FstF = fopen(FstFN, "r");
    if (FstF == NULL) { // checks if opening file wasn't successful
        printf("Some error occurred!\n");
        return 0;
    } else {
        fscanf(FstF, "%lf", &d1);
    }

    fclose(FstF);

    // opens the second file and reads the double value inside
    SndF = fopen(SndFN, "r");
    if (SndF== NULL) { // checks if opening file wasn't successful
        printf("Some error occurred!\n");
        return 0;
    } else {
        fscanf(SndF, "%lf", &d2);
    }

    fclose(SndF);

    // prints on file the result of different operations on both doubles
    out = fopen("results.txt", "w");
    fprintf(out, "Sum: %lf\n", d1 + d2);
    fprintf(out, "Difference: %lf\n", d1 - d2);
    fprintf(out, "Product: %lf\n", d1 * d2);
    fprintf(out, "Division: %lf", d1 / d2);

    fclose(out);

    return 0;
}
