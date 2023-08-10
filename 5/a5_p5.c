/* CH-230-A
   a5 p5.c
   Matheas Roland Borsos
   m.borsos@jacobs-university.de
*/

#include <stdio.h>
#include <math.h>

double scalar_product(double arr[], double arr1[], int num);
void largest_number(double arr[], int num);
void smallest_number(double arr[], int num);
void p_of_smallest_number(double arr[], int num);
void p_of_largest_number(double arr[], int num);

int main(){

    int i, n;
    double v1[101], v2[101];
    scanf("%d", &n);
    for(i=0; i<n; i++)
        scanf("%lf", &v1[i]);
    for(i=0; i<n; i++)
        scanf("%lf", &v2[i]);
    printf("Scalar product=%lf\n", scalar_product(v1, v2, n));
    // prints on the screen the result of the scalar product of the 2 vectors
    smallest_number(v1, n);
    // the function prints on the screen 
    // the smallest number in the first vector
    p_of_smallest_number(v1, n);
    // the function prints on the screen 
    // the position of the smallest number in the first vector
    largest_number(v1, n);
    // the function prints on the screen 
    // the largest number in the first vector
    p_of_largest_number(v1, n);
    // the function prints on the screen 
    // the position of the largest number in the first vector
    smallest_number(v2, n);
    // the function prints on the screen 
    // the smallest number in the second vector
    p_of_smallest_number(v2, n);
    // the function prints on the screen 
    // the position of the smallest number in the second vector
    largest_number(v2, n);
    // the function prints on the screen 
    // the largest number in the second vector
    p_of_largest_number(v2, n);
    // the function prints on the screen 
    // the position of the largest number in the second vector
    return 0;
}

double scalar_product(double arr[], double arr1[], int num){
    int i;
    double sp = 0.0;
    for(i = 0; i < num; i++)
        sp = sp + (arr[i] * arr1[i]);
    // sp will keep the value of the scalar product
    return sp;
}

void largest_number(double arr[], int num){
    int i;
    double max;
    max = arr[0];
    for (i = 1; i < num ; i++){
        if (arr[ i ] > max )
            max = arr[i];
    }
    // max will keep the value of the largest number in the array
    printf( "The largest = %lf\n", max );
}

void smallest_number(double arr[], int num){
    int i;
    double min;
    min= arr[0];
    for (i = 1; i < num ; i++){
        if (arr[ i ] < min )
            min = arr[i];
    }
    // min will keep the value of the smallest number in the array
    printf( "The smallest = %lf\n", min );
}

void p_of_largest_number(double arr[], int num){
    int i, pmax;
    double max;
    max = arr[0];
    pmax = 0;
    for (i = 1; i < num ; i++){
        if (arr[ i ] > max ){
            max = arr[i];
            pmax = i;
        }
    }
    // pmax will keep the value of the position 
    // of the largest number in the array
    printf( "Position of largest = %d\n", pmax );
}

void p_of_smallest_number(double arr[], int num){
    int i, pmin;
    double min;
    min= arr[0];
    pmin = 0;
    for (i = 1; i < num ; i++){
        if (arr[ i ] < min ){
            min = arr[i];
            pmin = i;
        }
    }
    // pmin will keep the value of the position 
    // of the smallest number in the array
    printf( "Position of smallest = %d\n", pmin );
}
