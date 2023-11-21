#include "chain.hpp"

void chain(Hash hashtable, int key) {
    int index = hashtable.Hashing(key);

    if (hashtable.table[index].empty()) {
        hashtable.table[index].push_back(key);
    } else {
        int i = 1;
        while (!hashtable.table[index].empty()) {
            index = hashtable.Hashing(key) + (i * i);
            i++;
        }
        hashtable.table[index].push_back(key);
    }
}