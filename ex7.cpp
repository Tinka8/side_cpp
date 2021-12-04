#include <iostream>

int main() {

    int n, i, j;

    std::cout << "pocet opakovani: ";
    std::cin >> n;

    for (i = 1; i <= n; i++) {
        for (j = 1; j <= 8; j++ ) {
            if (j % 2 == 1) {
                std::cout << "X";
            } else if (j % 2 == 0) {
                std::cout << "O";
            }  
        }
        
        std::cout << "\n";
    }

    return 0;
}