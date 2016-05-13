#include "matrix.h"

Matrix *newMatrix(int r, int c) {
  Matrix *dest;
  dest = malloc(sizeof(int) * (r * c + 2));
  dest->rows = r;
  dest->cols = c;
  dest->entries = malloc(sizeof(int) * r * c);
  memset(dest->entries, 0, sizeof(int) * r * c);
  return dest;
} // initialises a zero matrix of a set size.

int get(int x, int y, Matrix *a) {
  if (x < a->rows && y < a->cols && x >= 0 && y >= 0) {
    return a->entries[(x) + (y) * a->cols];
  } else {
    return NAN;
  }
}

int set(int val, int x, int y, Matrix *a) {
  if (x < a->rows && y < a->cols && x >= 0 && y >= 0) {
    a->entries[(x) + (y) * a->cols] = val;
    return 0;
  } else {
    return 1;
  }
}

Matrix *matrixProduct(Matrix *a, Matrix *b) {
  if (a->cols == b->rows) {
    Matrix *answer;
    answer = newMatrix(a->rows, b->cols);
    int i, j, p, q;
    for (i = 0; i < a->rows; i++) {
      for (j = 0; j < b->cols; j++) {
        int sum = 0;
        for (p = 0; p < a->rows; p++) {
          for (q = 0; q < b->cols; q++) {
            sum += a->entries
          }
        }
      }
    }
  }
}
