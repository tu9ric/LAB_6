#ifndef CONVOLUTION_H
#define CONVOLUTION_H

#include "matrix.h"

class Convolution : public Matrix {
public:
    Convolution(const Matrix& input1, const Matrix& input2);

private:
    void performConvolution(const Matrix& input1, const Matrix& input2);
    int calculateConvolutionElement(const Matrix& input1, const Matrix& input2, int row, int col);
};

#endif