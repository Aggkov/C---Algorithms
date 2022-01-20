// Function that calculates sum of squares of an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>


#define SIZE 1000

void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
int sum_squares_array(int *array,int n);

int main()
{
    int array[SIZE];
    int sum,N = 20;



    // 1. Arxikopoiisi pinaka 20 thesewn me tuxaioys arithmous apo 1 ews 30

    init_array(array,N,1,30);

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(array,N);
    printf("\n\n");

    // ypologismos sum of squares of array


    printf("Sum of squares is: %d\n",sum_squares_array(array,N));



}


void init_array(int *array, int n, int a, int b)
{
    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        array[i] = a+rand()%(b-a+1);
    }
}

void print_array(int *array, int n)
{
    printf("[");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);

    }
    printf("%d]", array[n - 1]);

}

int sum_squares_array(int *array,int n)
{
    int sum = 0;

    for(int i = 0; i < n; i++)
    {
        sum += pow(array[i],2);                 // x = array[i] * array[i]
    }
    return sum;
}