//Pra rodar o código, basta rodar o comando "g++ -o test_program test.cpp Resources/Collum.cpp && ./test" no terminal
#include <iostream>
#include "Headers/Collum.hpp"
int main() {
    Collum c;
    c.PrintCollum();
    c.addElem(1);
    c.addElem(2);
    c.addElem(3);
    c.PrintCollum();
    c.RemoveElem(2);
    c.PrintCollum();
}