#include <iostream>
#include <vector>
#include <cstdlib>
#include <ctime>
#include "../Headers/Game.hpp"

using namespace std;

Game::Game(): turn(0)  {
    Players.resize(2);
    srand(static_cast<unsigned int>(time(0)));
}

bool Game::CallTurn() {
    turn++;
    return turn % 2;
}

int Game::RoolDice(){
    return (rand() % 6 + 1);
}

void Game::CurrentBoard() {
    Players[0].PrintBoard();
    cout << "Player 1 result: " << Players[0].playerResult() << " || Player 2 result: " << Players[1].playerResult() << endl;
    Players[1].PrintBoard();
}

void Game::GameStart() {
    while (!Players[0].GameEnd() || !Players[1].GameEnd()){
        int dice = RoolDice();
        int Collum, Pturn = CallTurn();
        cout << "+---------+--------+--------+" << endl;
        cout << "          Turn: " << turn << "           " << endl;
        cout << "+---------+--------+--------+" << endl;
        cout << "It's player's  " << Pturn + 1 << " turn" << " || you rooled: " << dice <<  endl;
        CurrentBoard();
        cout << "Choose a Collum, 1, 2 or 3 to put the number: ";
        cin >> Collum;
        Players[Pturn].addElemToCol(dice, Collum - 1);
        if(Pturn == 1) Players[0].RemoveElemFromCol(dice, Collum - 1);
        else Players[1].RemoveElemFromCol(dice, Collum - 1);
    }
}