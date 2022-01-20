#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 1000

void init_array(int *pin, int n, int a, int b);
void print_array(int *pin, int n);

int main()
{
    int pin[SIZE];
    int sum,N = 20;


    // 1. Arxikopoiisi pinaka 20 thesewn me tuxaioys arithmous apo 1 ews 30


    init_array(pin,N,1,30);

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(pin,N);
    printf("\n\n");

    // ypologismos athroismatos

    sum = 0;
    printf("\n\n \ti\tpin[i]\tsum\n");
    printf("---------------------------\n");

    for(int i = 0; i < N; i++)
    {
        sum += pin[i];

        printf("\t%d\t%d\t%d\n", i,pin[i], sum);
    }
    printf("To athroisma einai: %d",sum);
}

void init_array(int *pin, int n, int a, int b)
{
    srand(time(NULL));

    for(int i = 0; i < n; i++)
    {
        pin[i] = a+rand()%(b-a+1);
    }
}

void print_array(int *pin, int n)
{
    printf("[");
    for(int i = 0; i < n - 1; i++)
    {
        printf("%d ", pin[i]);

    }
    printf("%d]", pin[n - 1]);

}