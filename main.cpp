#include "hash/hash.hpp"

int main() {
    int a[] = {234789, 1523456, 242345, 111234, 271456, 813456, 1209874};
    int n = sizeof(a)/sizeof(a[0]);

    Hash h(9);
    for (int i = 0; i < n; i++)
        h.insertItem(a[i]);

    h.displayHash();
    h.deleteItem(242345);
    h.displayHash();
    return 0;
}