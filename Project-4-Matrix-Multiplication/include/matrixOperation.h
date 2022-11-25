//
// Created by UtoKing on 2022/10/19.
//

#ifndef PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H
#define PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H

#include "malloc.h"
#include "assert.h"
#include "string.h"

typedef struct{
    size_t row;
    size_t column;
    float *data;
}matrix;

void printMatrix(matrix *m);

matrix *createMatrix(float *data, size_t row, size_t column);

void deleteMatrix(matrix *m);

matrix *copyMatrix(matrix *m);

matrix *matmul_plain(matrix *matrix_1, matrix *matrix_2);

matrix *matmul_improved(matrix *matrix_1, matrix *matrix_2);

#endif //PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H


