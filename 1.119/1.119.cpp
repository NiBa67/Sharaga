#include <iostream>

int main() {
    int MASSIV[10] = { -1, 2, 3, 4, 5, -6, 7, 8, -9, -10 };
    int sz = 0;

    for (int i = 0; i < 10; i++) {
        if (MASSIV[i] >= 0) {
            MASSIV[sz] = MASSIV[i];  
            sz++;                     
        }
    }

    for (int i = sz; i < 10; i++) {
        MASSIV[i] = 0;
    }
    for (int i = 0; i < sz; i++) {
        std::cout << MASSIV[i] << " ";
    }
    std::cout << std::endl;

    return 0;
}
