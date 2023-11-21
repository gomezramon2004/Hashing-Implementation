#pragma once
#include <iostream>
#include <list>

class Hash {
    private:
        int BUCKET;
        std::list<int> *table;
        int hashing(int key);
    public:
        Hash(int n);
        void insertItem(int key);
        void deleteItem(int key);
        void displayHash();
};