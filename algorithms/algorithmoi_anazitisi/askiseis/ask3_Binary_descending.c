#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_sorted_array(int *array, int n, int a, int max_step);
void print_array(int *array,int n);
int binary_search_dec(int *array,int n,int x);



int main()
{
    int array[SIZE];
    int N = 20;

    // Arxikopoiisi pinaka 20 stoixeiwn me tuxaious 20 ews 50

    init_sorted_array(array,N,50,2);
    int x = 20 + rand()%30;

    // Ektipwsi pinaka

    printf("Pinakas dedomenwn: \n");
    print_array(array,N);
    printf("\nStoixeio x = %d", x);
    printf("\n\n");

    // Anazitisi stoixeiou



    int found = binary_search_dec(array,N,x);

    if(found)
    {
        printf("\nFound\n");
    }
    else
    {
        printf("\nNot found\n");
    }


}

void init_sorted_array(int *array,int n,int a, int max_step)
{
    srand(time(NULL));

    array[0] = a;

    for(int i = 1; i < n; i++)
    {
        array[i] = array[i - 1] - (rand()%max_step + 1);
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

int binary_search_dec(int *array,int n,int x)
{
    int start = 0;                      // Ayta einai index!!!
    int finish = n - 1;
    int middle;

    while(start <= finish)
    {
        middle = (start + finish) / 2;

        if(x == array[middle])
        {
            return 1;
        }
    else if(x > array[middle])
        finish = middle - 1;
    else    // x < array[middle]
        start = middle + 1;
    }
    return 0;

}