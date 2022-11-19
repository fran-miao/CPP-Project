//
// Created by UtoKing on 2022/10/19.
//

#ifndef PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H
#define PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H

#include "malloc.h"
#include "assert.h"
#include "string.h"

typedef struct{
    int row;
    int column;
    float *data;
}matrix;

void printMatrix(matrix *m);

matrix *createMatrix(float *data, int row, int column);

void deleteMatrix(matrix *m);

matrix *copyMatrix(matrix *m);

matrix *multiplyMatrix(matrix *matrix1, matrix *matrix2);

#endif //PROJECT_2_MATRIX_OPERATION_MATRIXOPERATION_H


