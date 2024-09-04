#include <iostream>
#include <vector>
#include "../Headers/Collum.hpp"
#include "../Headers/Board.hpp"

using namespace std;

Board::Board(): Result(0) {
    board.resize(3);
}

bool Board::GameEnd() {
    int aux = 0;
    for(int i = 0; i < 3; i++) {
        if(board[i].IsFull()) {
            aux++;
        }
    }
    return aux == 3;
}

void Board::addElemToCol(int Elem, int Col) {
        board[Col].addElem(Elem);
        Recalculate();
}

void Board::Recalculate() {
    Result = 0;
    for(int i = 0; i < 3; i++) {
        Result += board[i].CalculateSum();
    }
}

void Board::RemoveElemFromCol(int Elem, int Col) {
    board[Col].RemoveElem(Elem);
    Recalculate();
}

void Board::PrintBoard() {
    for(int i = 0; i < 3; i++) {
        DrawDiceRow(board[0].collum[i], board[1].collum[i], board[2].collum[i]);
    }
}

int Board::playerResult() {
    return Result;
}

void Board::DrawDiceRow(int value1, int value2, int value3){
    string Value;
    if(value1 == 0) Value += "|       |"; else Value += "|   " + to_string(value1) + "   |";
    Value += " ";
    if(value2 == 0) Value += "|       |"; else Value += "|   " + to_string(value2) + "   |";
    Value += " ";
    if(value3 == 0) Value += "|       |"; else Value += "|   " + to_string(value3) + "   |";
    
    cout << " _______ " << " " << " _______ " << " " << " _______ " << endl;
    cout << "|       |" << " " << "|       |" << " " << "|       |" << endl;
    cout << Value << endl;    
    cout << "|_______|" << " " << "|_______|" << " " << "|_______|" << endl;
    }
