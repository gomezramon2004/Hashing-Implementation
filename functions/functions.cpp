#include "functions.hpp"

void quadratic(Hash& hashtable, int key) {
    int index = hashtable.hashing(key);

    if (hashtable.isFull()) {
        throw std::runtime_error("ERROR: Relocation is not possible. Hash Table is full.");
    }

    if (!hashtable.getTable()[index].empty()) {
        int i = 1;
        while (!hashtable.getTable()[hashtable.hashing(index + i * i)].empty()) {
            i++;
        }
        index = hashtable.hashing(index + i * i);
    }

    hashtable.getTable()[index].push_back(key);
    hashtable.upgradeCurrentBucket();
}

void chain(Hash& hashtable, int key) {
    int index = hashtable.hashing(key);
    hashtable.getTable()[index].push_back(key);
    hashtable.upgradeCurrentBucket();
}