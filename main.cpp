#include "matrix.h"
#include "convolution.h"
#include "subdiscretization.h"
#include <iostream>

int main() {
    // Создание матриц
    Matrix m0;
    Matrix m1(6, 6);
    Matrix m2(6, 6);

    // Использование операторов
    Matrix m3 = m1 + m2;
    Matrix m4 = m1 - m2;
    Matrix m5 = m1 * 5;
    Matrix m6 = m1 * m2;
    Matrix m7 = m1;
    

    // Вывод матриц
    std::cout << "m0: \n" << m0 << std::endl;
    std::cout << "m1:\n" << m1 << std::endl;
    std::cout << "m2:\n" << m2 << std::endl;
    std::cout << "m3 (m1 + m2):\n" << m3 << std::endl;
    std::cout << "m4 (m1 - m2):\n" << m4 << std::endl;
    std::cout << "m5 (m1 * 5):\n" << m5 << std::endl;
    std::cout << "m6 (m1 * m2):\n" << m6 << std::endl;
    std::cout << "m1==m2: " << (m1 == m2 ? "true" : "false") << std::endl;
    std::cout << "max m1: " << m1.getMaxValue() << std::endl;
    std::cout << "max m2: " << m2.getMaxValue() << std::endl;
    std::cout << "m7: \n" << m7 << std::endl;
    std::cout << "m1==m7: " << (m1 == m7 ? "true" : "false") << std::endl;

    Matrix m8(2, 2);
    std::cout << "Введите элементы матрицы m8: " << std::endl;
    std::cin >> m8;

    // Вывод матрицы
    std::cout << "Матрица m8: \n" << m8 << std::endl;


    // Создание матриц
    Matrix input1(6, 6);
    Matrix input2(3, 3);
    std::cout << "input1:\n" << input1 << std::endl;
    std::cout << "input2:\n" << input2 << std::endl;

    
    // свёртка матриц
    Convolution conv(input1, input2);

    // вывод результата
    std::cout << "Результат свёртки:\n" << conv << std::endl;



   // Matrix input(4, 4);
    std::cout << "input:\n" << m3 << std::endl;
    SubsamplingMatrix subsamplingMatrix(m3);
    Matrix maxValuesMatrix = subsamplingMatrix.getMaxValuesMatrix();
    std::cout << "Результирующая матрица с максимальными значениями: << \n";
    for (int i = 0; i < maxValuesMatrix.rows; ++i) {
        for (int j = 0; j < maxValuesMatrix.cols; ++j) {
            std::cout << maxValuesMatrix.data[i][j] << " ";
        }
        std::cout << "\n";
    }}