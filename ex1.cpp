// vypiš všechna sudá čísla od 1 do 40 včetně
#include <iostream>

int main() {

    for (int i = 1; i <= 40; i++) {
        if (i % 2 == 0) {
            std::cout << i;
        }
    }

    return 0;
}