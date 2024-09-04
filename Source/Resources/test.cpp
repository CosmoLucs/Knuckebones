//Pra rodar o código, basta rodar o comando "g++ -o test_program test.cpp Resources/Collum.cpp && ./test" no terminal
#include <iostream>
#include "../Headers/Collum.hpp"
#include "../Headers/Board.hpp"
int main() {
    Board b;
    b.addElemToCol(2, 1);
    b.addElemToCol(2, 0);
    b.addElemToCol(1, 0);
    cout << "Soma igual a: " << b.playerResult() << endl;
    b.PrintBoard();
    
    b.RemoveElemFromCol(2, 0);  // Testando remoção
    cout << "Soma após remoção: " << b.playerResult() << endl;
    b.PrintBoard();
    
    return 0;
}
