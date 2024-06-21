#ifndef SUBDISCRETIZATION_H
#define SUBDISCRETIZATION_H

#include "matrix.h"

class SubsamplingMatrix {
public:
    SubsamplingMatrix(const Matrix& matrix); // Конструктор с параметром
    Matrix getMaxValuesMatrix() const; // Метод для получения матрицы с максимальными значениями
private:
    Matrix inputMatrix;
};

#endif