#include <iostream>
#include <algorithm> // Для сортування
using namespace std;

// Функція ініціалізації матриці (int)
void initMatrix(int** matrix, int size) {
    cout << "Введіть елементи матриці (int):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Функція ініціалізації матриці (double)
void initMatrix(double** matrix, int size) {
    cout << "Введіть елементи матриці (double):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Функція ініціалізації матриці (char)
void initMatrix(char** matrix, int size) {
    cout << "Введіть елементи матриці (char):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << "matrix[" << i << "][" << j << "]: ";
            cin >> matrix[i][j];
        }
    }
}

// Функція виведення матриці (int)
void printMatrix(int** matrix, int size) {
    cout << "Матриця (int):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Функція виведення матриці (double)
void printMatrix(double** matrix, int size) {
    cout << "Матриця (double):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Функція виведення матриці (char)
void printMatrix(char** matrix, int size) {
    cout << "Матриця (char):" << endl;
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size; j++) {
            cout << matrix[i][j] << "\t";
        }
        cout << endl;
    }
}

// Функція пошуку мін. і макс. на головній діагоналі (int)
void findMinMaxDiagonal(int** matrix, int size) {
    int min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (int): " << min << endl;
    cout << "Максимум на головній діагоналі (int): " << max << endl;
}

// Функція пошуку мін. і макс. на головній діагоналі (double)
void findMinMaxDiagonal(double** matrix, int size) {
    double min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (double): " << min << endl;
    cout << "Максимум на головній діагоналі (double): " << max << endl;
}

// Функція пошуку мін. і макс. на головній діагоналі (char)
void findMinMaxDiagonal(char** matrix, int size) {
    char min = matrix[0][0], max = matrix[0][0];
    for (int i = 0; i < size; i++) {
        if (matrix[i][i] < min) min = matrix[i][i];
        if (matrix[i][i] > max) max = matrix[i][i];
    }
    cout << "Мінімум на головній діагоналі (char): " << min << endl;
    cout << "Максимум на головній діагоналі (char): " << max << endl;
}

// Функція сортування рядків матриці (int)
void sortRows(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size); // Сортуємо кожен рядок
    }
    cout << "Матриця (int) після сортування рядків:" << endl;
    printMatrix(matrix, size);
}

// Функція сортування рядків матриці (double)
void sortRows(double** matrix, int size) {
    for (int i = 0; i < size; i++) {
        sort(matrix[i], matrix[i] + size);
    }
    cout << "Матриця (double) після сортування рядків:" << endl;
    printMatrix(matrix, size);
}

// Функція сортування рядків матриці (char)
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

    // Динамічне виділення пам'яті для матриць
    int** intMatrix = new int* [size];
    double** doubleMatrix = new double* [size];
    char** charMatrix = new char* [size];
    for (int i = 0; i < size; i++) {
        intMatrix[i] = new int[size];
        doubleMatrix[i] = new double[size];
        charMatrix[i] = new char[size];
    }

    // Робота з int матрицею
    cout << "\nРобота з int матрицею:" << endl;
    initMatrix(intMatrix, size);
    printMatrix(intMatrix, size);
    findMinMaxDiagonal(intMatrix, size);
    sortRows(intMatrix, size);

    // Робота з double матрицею
    cout << "\nРобота з double матрицею:" << endl;
    initMatrix(doubleMatrix, size);
    printMatrix(doubleMatrix, size);
    findMinMaxDiagonal(doubleMatrix, size);
    sortRows(doubleMatrix, size);

    // Робота з char матрицею
    cout << "\nРобота з char матрицею:" << endl;
    initMatrix(charMatrix, size);
    printMatrix(charMatrix, size);
    findMinMaxDiagonal(charMatrix, size);
    sortRows(charMatrix, size);

    // Звільнення пам'яті
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