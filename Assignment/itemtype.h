#ifndef ITEMTYPE_H
#define ITEMTYPE_H
#include<string>
#include<iostream>
using namespace std;
const int SIZE = 10;

class ItemType
{
    public:
        int id;
        string name;
        ItemType();
        int runArray[SIZE];
        int findTotal();
        double findAverage();
        int findMax();
        int findMin();
};

#endif // ITEMTYPE_H
