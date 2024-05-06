#include <stdio.h>
#include "SparseMatrixTranspose.h"

int main() {
    term a[9] = {
            {6, 6, 8},
            {0, 0, 15},
            {0, 3, 22},
            {0, 5, -15},
            {1, 1, 11},
            {1, 2, 3},
            {2, 3, -6},
            {4, 0, 91},
            {5, 2, 28}
    };

    term b[sizeof(a) / sizeof(a[0])];

    int i;

    printf("<<Sparse Matrix a>>\n");
    for (i = 0; i < 9; i++) {
        printf("%d %d %d\n", a[i].row, a[i].col, a[i].value);
    }

    transpose(a, b);

    printf("\n<<Sparse Matrix b>>\n");
    for (i = 0; i < 9; i++) {
        printf("%d %d %d\n", b[i].row, b[i].col, b[i].value);
    }

    return 0;
}