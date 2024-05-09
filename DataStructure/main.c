#include <stdio.h>
#include "addPoly.h"

int main() {

    polynomial A = {3, {4, 3, 5, 0}};
    polynomial B = {4, {3, 1, 0, 2, 1}};
    polynomial C;

    C = addPoly(A, B);

    printf("A(x) = ");
    printPoly(A);

    printf("B(x) = ");
    printPoly(B);

    printf("C(x) = ");
    printPoly(C);

    return 0;
}