#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    const int row = 200;
    const int col = 300;

    srand(static_cast<unsigned int>(time(0)));

    int** arr = nullptr;
    int rowsAlloc = 0;

    try {
        arr = new int* [row];
        for (int i = 0; i < row; ++i) {
            arr[i] = new int[col];
            rowsAlloc++;
        }
        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                arr[i][j] = rand() % 14 - 3;
            }
        }
        for (int i = 0; i < 5; ++i) {
            for (int j = 0; j < 5; ++j) {
                std::cout << arr[i][j] << "\t";
            }
            std::cout << std::endl;
        }
    }
    catch (...) {
        std::cout << "blegh";
    }

    for (int i = 0; i < rowsAlloc; ++i) {
        delete[] arr[i];
    }
    delete[] arr;
    return 0;
}