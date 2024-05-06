//
// Created by 최승원 on 24. 5. 7.
//

#pragma once

typedef struct {
    int row;
    int col;
    int value;
} term;

void transpose(term a[], term b[]);