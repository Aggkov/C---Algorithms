#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define SIZE 1000

void init_array(int *array, int n, int a, int b);
void print_array(int *array, int n);
int count_array(int *array,int n, int x);

int main()
{
    int array[SIZE];
    int sum,N = 20;
    int x;



    // 1. Arxikopoiisi pinaka 20 thesewn me tuxaioys arithmous apo 1 ews 30

    init_array(array,N,1,10);
    x = 1 + rand()%10;

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(array,N);
    printf("\n\n");

    // ypologismos count of element(x) in an array

    printf("\nTo plithos twn emfanisewn toy %d einai %d: \n",x, count_array(array,N,x));


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

int count_array(int *array,int n, int x)
{
    int count = 0;

    for(int i = 0; i < n; i++)
    {
        if(array[i] == x)
            count++;
    }
    return count;
}