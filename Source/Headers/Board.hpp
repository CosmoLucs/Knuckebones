#pragma once

#include <vector>
#include "Collum.hpp"
using namespace std;

class Board
{
    vector<Collum> board;
    int Result;
    
    void Recalculate();
    void DrawDiceRow(int value1, int value2, int value3);
public:
    Board();
    bool GameEnd();
    void addElemToCol(int Elem, int Col);
    void RemoveElemFromCol(int Elem, int Col);
    void PrintBoard();
    int playerResult();
};