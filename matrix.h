#ifndef MATRIX_H

#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <string.h>
#include <math.h>

typedef struct Matrix {
  int rows;
  int cols;
  int *entries;
} Matrix;

Matrix *newMatrix(int, int);

int get(int, int, Matrix*);

int set(int, int, int, Matrix*);

Matrix *matrixProduct(Matrix*, Matrix*);

#endif
