#include <iostream>
using namespace std;

int** convert(int* arr, int m, int n, int arrsize) {
    if (m * n != arrsize) {
        cout << "Error: Size mismatch!" << endl;
        return nullptr;
    }

    // Dynamically allocate a 2D array
    int** matrix = new int*[m];
    for (int i = 0; i < m; i++) {
        matrix[i] = new int[n];
    }

    // Fill the 2D array with values from the 1D array
    for (int i = 0, k = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            matrix[i][j] = arr[k++];
        }
    }

    return matrix;
}

void printMatrix(int** matrix, int m, int n) {
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            cout << matrix[i][j] << " ";
        }
        cout << endl;
    }
}

int main() {
    int arr[] = {1, 2, 3, 4};
    int m = 2, n = 2;
    int** matrix = convert(arr, m, n, 4);

    if (matrix != nullptr) {
        printMatrix(matrix, m, n);

        // Free the dynamically allocated memory
        for (int i = 0; i < m; i++) {
            delete[] matrix[i];
        }
        delete[] matrix;
    }

    return 0;
}
