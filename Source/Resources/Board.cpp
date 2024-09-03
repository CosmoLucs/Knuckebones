#include <iostream>
#include <vector>
#include "../Headers/Collum.hpp"
#include "../Headers/Board.hpp"

using namespace std;

Board::Board() {
    board.resize(3);
}

bool Board::GameEnd() {
    int aux = 0;
    for(int i = 0; i < 3; i++) {
        if(board[i].IsFull()) {
            aux++;
        }
    }

    if(aux == 3) {
        return true;
    } else {
        return false;
    }   
}

void Board::addElemToCol(int Elem, int Col) {
    if(board[Col].IsFull()) {
        board[Col].addElem(Elem);
    }
}

void Board::RemoveElemFromCol(int Elem, int Col) {
    board[Col].RemoveElem(Elem);
}
