#include "hash.hpp"

Hash::Hash(int n) {
    this->BUCKET = n;
    table = new std::list<int>[BUCKET];
}

int Hash::hashing(int key) {
    return key % BUCKET;
}

void Hash::insertItem(int key) {
    table[hashing(key)].push_back(key);
}

void Hash::deleteItem(int key) {
    int index = hashing(key);
    std::list<int>::iterator i;
    for (i = table[index].begin(); i != table[index].end(); i++) {
        if (*i == key)
            break;
    }
    if (i != table[index].end())
        table[index].erase(i);
}

void Hash::displayHash() {
    for (int i = 0; i < BUCKET; i++) {
        std::cout << i;
        for (auto x : table[i])
            std::cout << " --> " << x;
        std::cout << std::endl;
    }
}