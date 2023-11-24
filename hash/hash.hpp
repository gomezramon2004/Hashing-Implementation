#pragma once
#include <iostream>
#include <list>

class Hash {
    private:
        int BUCKET;
        int currentBucket;
        std::list<int> *table;
    public:
        Hash(int n);
        std::list<int>* getTable();
        bool isFull();
        void upgradeCurrentBucket();
        int hashing(int key);
        void displayHash();
};