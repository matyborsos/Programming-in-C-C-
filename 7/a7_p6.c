/* CH-230-A
   a7 p6.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <string.h>

int n, i;

struct person {
    char name[30];
    int age;
};


int compareName(struct person a, struct person b) {
    if(strcmp(a.name, b.name) == 0)
        return a.age - b.age;
    else
        return strcmp(a.name, b.name);
}
// compares the 2 people by their name and then by age

int compareAge(struct person a, struct person b) {
    if(a.age == b.age)
        return strcmp(a.name, b.name);
    else
        return a.age - b.age;
}
// compares the 2 people by their age and then by name

void bubblesort( struct person *array, int n, int (*comp)(const struct person a, const struct person b) ) {
    int i;
    bool swapped;
    do{
        swapped = false;
        for( i = 1; i<= n - 1;  i++ )
        {
            // if this pair is out of order
            if(comp(array[i-1], array[i]) > 0){
                // Declare temporary struct to act as a third swap variable
                struct person tmp = array[i-1];
                array[i-1] = array[i];      // swaps the elements
                array[i] = tmp;
                // change swapped to true to check following element
                swapped = true;
            }
        }
    }while(swapped != 0);
}

int main () {

    int i;
    scanf("%d", &n);
    struct person *array;
    array = ( struct person *) malloc ( sizeof ( struct person ) * n);
    if(array == NULL)
        exit(1);
    // dynamically allocates memory for the array
    for(i=0; i<n; i++){
        getchar();
        fgets((array[i]).name, sizeof((array[i]).name), stdin);
        (array[i]).name[strcspn((array[i]).name, "\n")] = 0;
        scanf("%d", &(array[i]).age);
    }
    // reads the elements of the array

    // Sort by name and prints on the screen
    bubblesort(array, n, compareName);
    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", array[i].name, array[i].age);
    }
    printf("\n");

    // Sorts by age and prints on the screen
    bubblesort(array, n, compareAge);
    for(i = 0; i < n; i++){
        printf("{%s, %d}; ", array[i].name, array[i].age);
    }
    printf("\n");

    free(array);
    // frees the allocated memory
    return 0;

}
