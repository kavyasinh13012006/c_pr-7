#include <stdio.h>

int main() {
    int array_size, i;

    printf("Enter the size of the array: ");
    scanf("%d", &array_size);

    int array[array_size];

    printf("Enter the elements of the array:\n");
    for (i = 0; i < array_size; i++) {
        scanf("%d", &array[i]);
    }

    printf("Summed Array with 1 added to each element: ");
    for (i = 0; i < array_size; i++) {
        printf("%d ", array[i] + 1);
    }
    printf("\n");

    return 0;
}

