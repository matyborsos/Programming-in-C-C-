/*  CH-230-A
    a8 p9.c
    Matheas Roland Borsos
    m.borsos@jacobs-university.de
*/
 
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
 
int counts = 0;
 
void transfer(char *fN, FILE *out) {
    char buffer[64];
    memset(buffer, '\0', sizeof(buffer));
 
    FILE *fp = fopen(fN, "rb");
 
    if (fp == NULL) // checks if any error has occured
        exit(1);
 
    fseek(fp, 0L, SEEK_END);
    long l = ftell(fp); // l is the lenght of the file
    fseek(fp, 0L, SEEK_SET);
 
    while (fread(buffer, 1, l, fp) && l > 0){
        int i;
        if (l < 64){ //checks if file length is less than 64 (buffer size)
            for(i = 0; i < l; i++)
                printf("%c", buffer[i]);
            printf("\n");
            fwrite(buffer, l, 1, out);
            l = 0;
        }
        else{
            for(i = 0; i < l; i++)
                printf("%c", buffer[i]);
            printf("\n");
            fwrite(buffer, 64, 1, out);
            // decreases l by 64 as we have transferred 64 bytes
            l = l - 64;
        }
    }
 
    fputc('\n', out); 
    fclose(fp);
    counts++;
}
 
int main() {
    int n, i;
    char fN[100];
    FILE *out = fopen("output.txt", "wb");
 
    if (out == NULL) 
        exit(1);
 
    scanf("%d", &n); // Input number of files being read
    getchar();
 
    printf("Concatenating the content of %d files ...\n", n);
 
    // for each file, read, write and print its data onto output and stdout
    for (i = 0; i < n; i++) {
        scanf("%s", fN);
        transfer(fN, out);
    }
    
    fclose(out);
 
    // checks if it successfully read and wrote each file
    if (counts == n)
        printf("The result was written into output.txt\n");
    
    return 0; 
}