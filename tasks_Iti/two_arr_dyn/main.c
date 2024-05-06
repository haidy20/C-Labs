#include <stdio.h>
#include <stdlib.h>

int main() {
    int rows, cols;
    int i, j;

    printf("Enter the number of rows: ");
    scanf("%d", &rows);

    printf("Enter the number of columns: ");
    scanf("%d", &cols);

    int **ptr = (int **)malloc(rows * sizeof(int *));

    for (i = 0; i < rows; i++) {
        ptr[i] = (int *)malloc(cols * sizeof(int));
    }

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("Enter the number for row %d, column %d: ", i, j);
            scanf("%d", &ptr[i][j]);
        }
    }

    printf("Entered matrix:\n");
    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    for (i = 0; i < rows; i++) {
        free(ptr[i]);
    }
    free(ptr);

    return 0;
}






