#pragma once

#include <vector>
#include "Collum.hpp"
using namespace std;
class Board
{
private:
    vector<Collum> board;
public:
    Board();
    bool GameEnd();
    void addElemToCol(int Elem, int Col);
    void RemoveElemFromCol(int Elem, int Col);
};

