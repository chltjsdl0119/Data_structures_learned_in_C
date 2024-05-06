#include <stdio.h>
#include "listS.h"

int main() {

    int list[MAX] = {10, 20, 30, 40, 50};

    int i, move, size = 5;

    printf("\nBefore insert: ");
    for (i = 0; i < size; i++)
        printf("%d ", list[i]);

    printf("\nElement Count: %d\n", size);

    move = insertElement(list, size, 25);

    printf("\nAfter insert: ");
    for (i = 0; i < size + 1; i++)
        printf("%d ", list[i]);

    printf("\nElement Count: %d", size + 1);
    printf("\nMove Count: %d\n", move);

    move = deleteElement(list, size, 30);

    if (move == 0) {
        printf("\nDelete Failed\n");
    } else {
        printf("\nAfter delete: ");
        for (i = 0; i < size; i++)
            printf("%d ", list[i]);

        printf("\nElement Count: %d", size - 1);
        printf("\nMove Count: %d\n", move);
    }

    return 0;
}
