// return 0 or 1 if element exists. By reference into a new variable return -1 if it doesnt exist in array. And position of element if it exists

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define SIZE 1000

#define TRUE 1
#define FALSE 0

void init_sorted_array(int *array, int n, int a, int max_step);
void print_array(int *array,int n);
int binary_search2(int *array, int n, int x, int *pos);



int main()
{
    int array[SIZE];
    int N = 20;
    int pos;

    // Arxikopoiisi pinaka 20 stoixeiwn me tuxaious 1 ews 20

    init_sorted_array(array,N,1,2);
    int x = 1 + rand()%30;

    // Ektipwsi pinaka

    printf("Pinakas dedomenwn: \n");
    print_array(array,N);
    printf("\nStoixeio x = %d", x);
    printf("\n\n");

    // Anazitisi stoixeiou

    printf("\ti\tarray[i]\tfound\n");
    printf("--------------------------------\n");

    int found = binary_search2(array,N, x,&pos);

    if(found)
    {
        printf("I thesi toy stoixeioy %d einai %d\n", x, pos);
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

int binary_search2(int *array, int n, int x, int *pos)
{
    int start = 0;
    int finish = n - 1;
    int middle;

    while(start <= finish)
    {
        middle = (start + finish) / 2;

        if(x == array[middle])
        {
            *pos = middle;                    // otan vrw tin x thelw stin metavliti poy exw orisei mesw deikti na apothikeutei i thesi stin opoia vrethike to stoixeio
            return 1;                       // kai stin periptwsi auti einai i middle position
        }
    else if(x < array[middle])
        finish = middle - 1;
    else
        start = middle + 1;
    }
    *pos = -1;
    return 0;

}