#include "hash.hpp"

Hash::Hash(int n) {
    this->BUCKET = n;
    table = new std::list<int>[BUCKET];
}

int Hash::Hashing(int key) {
    return key % BUCKET;
}

void Hash::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        std::cout << i;
        for (auto x : table[i])
            std::cout << " --> " << x;
        std::cout << std::endl;
    }
}