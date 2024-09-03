#pragma once

#include <vector>
using namespace std;
class Collum
{
    vector<int> collum;
    int nElements;

    void Rearange();
public:
    Collum();
    bool IsFull();
    void addElem(int Elem);
    void RemoveElem(int Elem);
    void PrintCollum();
};
