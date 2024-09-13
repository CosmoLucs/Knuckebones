//Pra rodar o código:
// g++ -I../Headers -o test_program test.cpp Collum.cpp Board.cpp Game.cpp
// ./test_program

#include <iostream>
#include "../Headers/Game.hpp"
int main() {
    Game game;
    game.GameStart();
    return 0;
}

/*
Coisas que Faltam:
- Sequência de Vitória do jogador com maior pontuação
- Repetir a jogada quando um número de coluna inválido é colocado
- Verificar oq acontece se tentar colocar um número em uma coluna cheia
- O jogo está rodando mesmo depois de um tabuleiro ficar cheio
*/
