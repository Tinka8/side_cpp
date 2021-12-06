// vypiš všechna lichá čísla od 1 do 40 včetně
#include <iostream>

int main() {

    for (int i = 1; i <= 40; i++) {
        if (i % 2 == 1) {
            std::cout << i;
        }
    }

    return 0;
}