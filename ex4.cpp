// * * * * * 
// * * * *
// * * *
// * *
// *
#include <iostream>

int main() {

    int n, i, k;

    std::cout << "zadaj pocet riadkov: ";
    std::cin >> n;

    for (i = 1; i <= n; i--) {
        for (k = 1; k <= i; k++) {
           std::cout << "* ";
        }
    
        std::cout << "\n";
    }

    return 0;
}
