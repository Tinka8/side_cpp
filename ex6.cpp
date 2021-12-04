// * 
// * *
// * * *
// * * * *
// * * * * * Václav Nápravník
// * * * *
// * * *
// * *
// *
#include <iostream>

int main() {

    int i, j, n;

    std::cout << "zadaj pocet opakovani: ";
    std::cin >> n;

    if (n < 3) {
        std::cout << "pocet opakovani musi byt vacsi nez 2";
    } else {

        for (i = 1; i <= n; i++) {
            for (j = 1; j <= i; j++) {
                std::cout << "* ";
            }

            // riadok s najvyssim poctom hviezdiciek 
            if (i == n) {
                std::cout << " Vaclav Napravnik";
            }

            std::cout << "\n";
        }

        for (i = n; i >= 1; i--) {
            for (j = 2; j <= i; j++) {
                std::cout << "* ";
            }

            std::cout << "\n";
        }

    }

    return 0;
}