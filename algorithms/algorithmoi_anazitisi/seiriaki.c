#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_array(int *array, int n, int a, int b);
void print_array(int *array,int n);
int linear_search(int *array,int n, int x);


int main()
{
    int array[SIZE];
    int N = 20;

    // Arxikopoiisi pinaka 20 stoixeiwn me tuxaious 1 ews 20

    init_array(array,N,1,20);
    int x = 1 + rand()%20;

    // Ektipwsi pinaka

    printf("Pinakas dedomenwn: \n");
    print_array(array,N);
    printf("\nStoixeio x = %d", x);
    printf("\n\n");

    // Anazitisi stoixeiou

    printf("\ti\tarray[i]\tfound\n");
    printf("--------------------------------\n");

    int found = linear_search(array,N,x);

    if(found)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot found\n");
    }


}

void init_array(int *array,int n,int a, int b)
{
    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        array[i] = a + rand()%(b - a + 1);
    }
}

void print_array(int *array,int n)
{
    printf("[");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", array[i]);

    }
    printf("%d]", array[n - 1]);
}

int linear_search(int *array,int n, int x)
{


    for(int i = 0; i < n; i++)
    {
        if(x == array[i])
        {
            return 1;
        }

    }
    return 0;
}