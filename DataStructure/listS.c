//
// Created by 최승원 on 24. 5. 7.
//

#include "listS.h"

int insertElement(int L[], int n, int x) {
    int i, k = 0, move = 0;

    for (i = 0; i < n; i++) {
        if (L[i] <= x && x <= L[i + 1]) {
            k = i + 1;
            break;
        }
    }
    if (i == 0)
        k = n;

    for (i = n; i > k; i--) {
        L[i] = L[i - 1];
        move++;
    }

    L[k] = x;
    return move;
}

int deleteElement(int L[], int n, int x) {
    int i, k = 0, move = 0;

    for (i = 0; i < n; i++) {
        if (L[i] == x) {
            k = i;
            break;
        }
    }
    if (i == n)
        return -1;

    for (i = k; i < n - 1; i++) {
        L[i] = L[i + 1];
        move++;
    }
    return move;
}