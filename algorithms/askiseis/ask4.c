#include <stdio.h>
#include <stdlib.h>
#include <time.h>



#define SIZE 1000


void print_array(int *array, int n);
void fibonacci(int *array, int n);          // Grafw void giati oi allages pou ginontai ston pinaka diatirountai kai stin main logw twn deiktwn. Ksekinw apo ti thesi 0

int main()
{
    int array[SIZE];
    int N = 20;

    // ypologismos kai apothikeusi fibonacci arithmwn

    fibonacci(array,N);

    // ektipwsi pinaka

    printf("Pinakas dedomenwn: ");
    print_array(array,N);
    printf("\n\n");




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
void fibonacci(int *array, int n)
{
    array[0] = 1;
    array[1] = 1;
    for(int i = 2; i < n; i++)
    {
        array[i] = array[i - 1] + array[i - 2];
    }
}