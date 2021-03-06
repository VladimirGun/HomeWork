#include <stdio.h>
#include <stdlib.h>


int main() {
    
    int** array = (int**) calloc (1000, sizeof(int*));
    int i = 0;
    int j = 0;
    for (i = 0; i < 1000; i++)
        array[i] = (int*) calloc (1000, sizeof(int));

    long long int sum = 0;

    for (i = 0; i < 1000; i++)
        for (j = 0; j < 1000; j++)
            sum += array[i][j] = i*j;

    printf("The sum is = %lld\n", sum);
    
    for (i = 0; i < 1000; i++)
        free(array[i]);
    
    free(array);
    

	return 0;
}

