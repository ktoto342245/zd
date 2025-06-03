#include <iostream>
#include <algorithm> 
using namespace std;

void initMatrix(int** matrix, int size) {
    cout << "Введіть елементи матриці (int):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void initMatrix(double** matrix, int size) {
    cout << "Введіть елементи матриці (double):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void initMatrix(char** matrix, int size) {
    cout << "Введіть елементи матриці (char):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

void printMatrix(int** matrix, int size) {
    cout << "Матриця (int):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void printMatrix(double** matrix, int size) {
    cout << "Матриця (double):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void printMatrix(char** matrix, int size) {
    cout << "Матриця (char):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

void findMinMaxDiagonal(int** matrix, int size) {
    int min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (int): " << min << endl;
    cout << "Максимум на головній діагоналі (int): " << max << endl;
}

void findMinMaxDiagonal(double** matrix, int size) {
    double min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (double): " << min << endl;
    cout << "Максимум на головній діагоналі (double): " << max << endl;
}

void findMinMaxDiagonal(char** matrix, int size) {
    char min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (char): " << min << endl;
    cout << "Максимум на головній діагоналі (char): " << max << endl;
}

void sortRows(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size); 
    }
    cout << "Матриця (int) після сортування рядків:" << endl;
    printMatrix(matrix, size);
}

void sortRows(double** matrix, int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size);
    }
    cout << "Матриця (double) після сортування рядків:" << endl;
    printMatrix(matrix, size);
}

void sortRows(char** matrix, int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size);
    }
    cout << "Матриця (char) після сортування рядків:" << endl;
    printMatrix(matrix, size);
}

int main() {
    setlocale(LC_ALL, "ru");
    int size;
    cout << "Введіть розмір квадратної матриці: ";
    cin >> size;

    int** intMatrix = new int* [size];
    double** doubleMatrix = new double* [size];
    char** charMatrix = new char* [size];
    for (int i = 0; i < size; i++) {
        intMatrix[i] = new int[size];
        doubleMatrix[i] = new double[size];
        charMatrix[i] = new char[size];
    }

    cout << "\nРобота з int матрицею:" << endl;
    initMatrix(intMatrix, size);
    printMatrix(intMatrix, size);
    findMinMaxDiagonal(intMatrix, size);
    sortRows(intMatrix, size);

    cout << "\nРобота з double матрицею:" << endl;
    initMatrix(doubleMatrix, size);
    printMatrix(doubleMatrix, size);
    findMinMaxDiagonal(doubleMatrix, size);
    sortRows(doubleMatrix, size);

    cout << "\nРобота з char матрицею:" << endl;
    initMatrix(charMatrix, size);
    printMatrix(charMatrix, size);
    findMinMaxDiagonal(charMatrix, size);
    sortRows(charMatrix, size);

    for (int i = 0; i < size; i++) {
        delete[] intMatrix[i];
        delete[] doubleMatrix[i];
        delete[] charMatrix[i];
    }
    delete[] intMatrix;
    delete[] doubleMatrix;
    delete[] charMatrix;

    return 0;
}
