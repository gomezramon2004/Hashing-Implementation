#pragma once
#include <iostream>
#include <list>

class Hash {
    private:
        int BUCKET;
    public:
        std::list<int> *table;
        Hash(int n);
        int Hashing(int key);
        void displayHash();
};