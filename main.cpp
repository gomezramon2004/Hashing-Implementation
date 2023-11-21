#include "hash/hash.hpp"
#include "quadratic/quadratic.hpp"
#include "chain/chain.hpp"

int main() {
    int a[] = {50, 700, 76, 85, 92, 73, 101};
    int n = sizeof(a)/sizeof(a[0]);

    Hash h(7);

    for (int i=0; i < n; ++i) {
        quadratic(h, a[i]);
    }

    h.displayHash();
    return 0;
}