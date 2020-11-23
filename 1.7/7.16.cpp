#include <iostream>
#include <vector>

int main() {
    size_t n, k;
    std::cin >> n >> k;

    std::vector<bool> skittles(n);

    for (size_t i = k; i > 0; i--) {
        size_t dropped_a, dropped_b;

        std::cin >> dropped_a >> dropped_b;

        for (size_t x = --dropped_a; x < dropped_b; x++)
            skittles[x] = true;
    }

    for (const bool& skittle : skittles)
        std::cout << (skittle ? '.' : 'I');

    std::cout << std::endl;
}