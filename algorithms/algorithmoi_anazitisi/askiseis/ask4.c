#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_sorted_array(int *array, int n, int a, int max_step);
void print_array(int *array,int n);
int linear_search_epanalipseis(int *array,int n, int x);
int binary_search_epanalipseis(int *array,int n,int x);


int main()
{
    int array[SIZE];
    int N = 20;
    int count_linear,count_binary;

    // Arxikopoiisi pinaka 20 stoixeiwn me tuxaious 1 ews 20

    init_sorted_array(array,N,1,2);
    int x = 1 + rand()%30;

    // Ektipwsi pinaka

    printf("Pinakas dedomenwn: \n");
    print_array(array,N);
    printf("\nStoixeio x = %d", x);
    printf("\n\n");

    // Anazitisi stoixeiou


    printf("--------------------------------\n");

    count_binary = binary_search_epanalipseis(array,N,x);
    count_linear = linear_search_epanalipseis(array,N,x);

    if(count_binary < count_linear)
    {
        printf("Binary runs %d times\n", count_binary);
        printf("Linear runs %d times\n", count_linear);
        printf("Binary wins!");
    }
    else if(count_binary > count_linear)
    {
        printf("Binary runs %d times\n", count_binary);
        printf("Linear runs %d times\n", count_linear);
        printf("Linear wins!");
    }
    else
    {
        printf("Binary runs %d times\n", count_binary);
        printf("Linear runs %d times\n", count_linear);
        printf("Tie!");
    }

}

void init_sorted_array(int *array,int n,int a, int max_step)
{
    srand(time(NULL));

    array[0] = a;

    for(int i = 1; i < n; i++)
    {
        array[i] = array[i - 1] + rand()%max_step + 1;
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

int binary_search_epanalipseis(int *array,int n,int x)
{
    int start = 0;
    int finish = n - 1;
    int middle;
    int count = 0;

    while(start <= finish)
    {
        count++;
        middle = (start + finish) / 2;

        if(x == array[middle])
        {
            return count;
        }

        else if(x < array[middle])
        finish = middle - 1;
        else
        start = middle + 1;


    }
    return count;

}

int linear_search_epanalipseis(int *array,int n, int x)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        count++;
        if(x == array[i])
        {
            return count;

        }
    }

    return count;
}



