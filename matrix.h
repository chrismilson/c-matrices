#ifndef MATRIX_H

#define MATRIX_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

typedef struct Matrix {
  int *entries;
  int rows;
  int cols;
} Matrix;

#endif
