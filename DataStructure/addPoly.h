//
// Created by 최승원 on 24. 5. 10.
//

#pragma once
#define MAX(a, b) ((a) > (b) ? (a) : (b))
#define MAX_DEGREE 50

typedef struct {
    int degree;
    float coef[MAX_DEGREE];
} polynomial;

polynomial addPoly(polynomial A, polynomial B);
void printPoly(polynomial P);