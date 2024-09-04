#pragma once

#include <vector>
using namespace std;
class Collum
{
    int nElements;
    int Sum;

    void Rearange();
public:
    vector<int> collum;
    Collum();
    bool IsFull();
    void addElem(int Elem);
    void RemoveElem(int Elem);
    void PrintCollum();
    int CalculateSum();
};
