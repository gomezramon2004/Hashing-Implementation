#include "hash/hash.hpp"
#include "functions/functions.hpp"

int main() {
    try {
        int a[] = {50, 700, 76, 85, 73, 12};
        int n = sizeof(a)/sizeof(a[0]);
        Hash h1(7);
        Hash h2(7);

        for (int i=0; i < n; ++i) {
            quadratic(h1, a[i]);
            chain(h2, a[i]);
        }

        h1.displayHash();
        h2.displayHash();

        quadratic(h1, 92);
        h1.displayHash();
    } catch (const std::runtime_error& e) {
        std::cerr << e.what() << std::endl;
    }
    return 0;
}