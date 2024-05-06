#include <stdio.h>
#include <stdlib.h>

int main()
{
  int size, i;

    printf("Enter the number of elements: ");
    scanf("%d", &size);

    int *array = (int*) malloc( size * sizeof(int));

    if (array == NULL) {
        printf("Memory allocation failed!");
        return -1;
    }

    for (i = 0; i < size; i++) {
        printf("Enter element %d: ", i);
        scanf("%d", &array[i]);

    }

    printf("Array elements: ");
    for (i = 0; i < size; i++) {
        printf("%d ", array[i]);
    }


    return 0;
}
