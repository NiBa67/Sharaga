#include <iostream>
#include <cstdlib>
#include <ctime>

int main() {
    std::srand(static_cast<unsigned>(std::time(nullptr)));
    const int r = 200;
    const int c = 400;
    float** mat = new float* [r];
    for (int i = 0; i < r; ++i) {
        mat[i] = new float[c];
    }
    for (int i = 0; i < r; ++i) {
        for (int j = 0; j < c; ++j) {
            mat[i][j] = (static_cast<float>(std::rand()) / RAND_MAX) * 2.0f - 1.0f;
        }
    }
    for (int i = 0; i < 5; ++i) {
        for (int j = 0; j < 5; ++j) {
            std::cout << mat[i][j] << " ";
        }
        std::cout << "\n";
    }
    return 0;
}