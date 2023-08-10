/* CH-230-A
   a4 p3.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

float geometric_mean(float arr[], int num);
float highest_number(float arr[], int num);
float smallest_number(float arr[], int num);
float sum(float arr[], int num);

int main(){

    int i, num;
    float arr[16], nr;
    for(i=0; i<15; i++){
        scanf("%f", &nr);
        if ( nr < 0 )
            break; // stops when a negative is entered
            // and doesn't add it to the array
        arr[i] = nr;
        // adds the values entered from the keyboard to the array
    }
    num = i;
    char c;
    getchar();
    scanf("%c", &c);
    switch(c) {
    case 'm':
        printf("The geometric mean is: %f", geometric_mean(arr, num));
        // prints the geometric mean of the array
        break;
    case 'h':
        printf("The highest number is: %f", highest_number(arr, num));
        // prints the highest number in the array
        break;
    case 'l':
        printf("The smallest number is: %f", smallest_number(arr, num));
        // prints the smallest number in the array
        break;
    case 's':
        printf("The sum of all elements is: %f", sum(arr, num));
        // prints the sum of all elements in the array
        break;
    }
    return 0;
}

float geometric_mean(float arr[], int num){
    int i;
    float product = 1.0;
    for(i = 0; i < num; i++)
        product = product * arr[i];
    float p = 1 / (float) num;
    float mean = pow(product, p);
    return mean;
}

float highest_number(float arr[], int num){
    int i , max ;
    max = arr[0];
    for (i = 1; i < num ; i++){
        if (arr[ i ] > max )
            max = arr[i];
    }
    return max ;
}

float smallest_number(float arr[], int num){
    int i , min ;
    min= arr[0];
    for (i = 1; i < num ; i++){
        if (arr[ i ] < min )
            min = arr[i];
    }
    return min ;
}

float sum(float arr[], int num){
    int i;
    float sum = 0.0;
    for(i = 0; i < num; i++)
        sum = sum + arr[i];
    return sum;
}
