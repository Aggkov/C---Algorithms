#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define SIZE 1000

void init_array(int *pin, int n, int a, int b);
void print_array(int *pin, int n);
int max_array(int *pin,int n);
int prod_array(int *pin,int n);


int main()
{
    int pin[SIZE];
    int prod,N = 20;


    // 1. Arxikopoiisi pinaka 20 thesewn me tuxaioys arithmous apo 1 ews 5


    init_array(pin,N,1,5);

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(pin,N);
    printf("\n\n");

    // ypologismos ginomenou

    prod = 1;
    printf("\n\n \ti\tpin[i]\tprod\n");
    printf("---------------------------\n");

    for(int i = 0; i < N; i++)
    {
        prod *= pin[i];
        printf("\t%d\t%d\t%d\n", i, pin[i], prod);
    }

    printf("To ginomeno einai: %d\n", prod);

    printf("To ginomeno einai: %d\n", prod_array(pin,N));

    printf("O megistos einai: %d\n", max_array(pin,N));
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


int prod_array(int *pin,int n)
{
    int prod = 1;

    for(int i = 0; i < n; i++)
    {
        prod *= pin[i];
    }
    return prod;
}

int max_array(int *pin,int n)
{
    int max = pin[0];

    for(int i = 1; i < n; i++)
    {
        if(pin[i] > max)
            max = pin[i];
    }
    return max;
}