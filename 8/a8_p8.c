/*  CH-230-A
    a8 p8.c
    Matheas Roland Borsos
    m.borsos@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
 
int main() {
    int word = 0, count = 0;
    char c, fN[100];
    FILE *fp;
 
    scanf("%s", fN);
 
    fp = fopen(fN, "r");
    
    while ((c = (fgetc(fp))) != EOF) {
        if(isalpha(c)) { // checks if the character is a letter
            word = 1; // word is set 1 cause we are still inside a word
            continue; 
        } else { // finds a separator
            if(word == 1) { // if there was a word before
                word = 0; // sets word to 0 to mark the word is finished
                count++;
            } else continue; 
            // for the case we have two separators in a row
        }
    }
 
    fclose(fp);
 
    if (count == 0)
        printf("The file contains no words.\n");
        // prints this if there are no words in the file
    else if (count == 1)
        printf("The file contains 1 word.\n");
        // prints this if there is only 1 word in the file
    else printf("The file contains %d words.", count);
        // prints this if there are multiple words in the file
 
    return 0; 
}