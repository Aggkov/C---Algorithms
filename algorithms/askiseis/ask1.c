// Function returns 1nd and 2nd max of an array

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 1000

void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
void two_max_array(int *array,int n,int *max1,int *max2);

int main()
{
    int array[SIZE];
    int sum,N = 20;
    int a,b;


    // 1. Arxikopoiisi pinaka 20 thesewn me tuxaioys arithmous apo 1 ews 30

    init_array(array,N,1,30);

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(array,N);
    printf("\n\n");

    // ypologismos twn 2 megistwn

    two_max_array(array,N,&a, &b);
    printf("Oi duo megistoi einai: %d kai %d\n",a, b);



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

void two_max_array(int *array,int n,int *max1,int *max2)
{
    *max1 = array[0];
    *max2 = array[1];

    if(array[0] > array[1])
    {
        *max1 = array[0];
        *max2 = array[1];
    }
    else
    {
        *max1 = array[1];
        *max2 = array[2];
    }


    for(int i = 2; i < n; i++)
    {
        if(array[i] > *max1)
        {
            *max2 = *max1;
            *max1 = array[i];
        }
        else if(array[i] > *max2)
        {
            *max2 = array[i];
        }
    }
}