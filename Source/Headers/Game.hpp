#pragma once

#include <vector>
#include <Board.hpp>
class Game {
    vector<Board> Players;
    int turn;

    public:
        Game();
        bool CallTurn();
        void GameStart();
        int RoolDice();
        void CurrentBoard();
};