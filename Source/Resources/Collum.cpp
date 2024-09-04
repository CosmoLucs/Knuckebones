#include <iostream>
#include <vector>
#include "../Headers/Collum.hpp"
using namespace std;

Collum::Collum() : nElements(0), Sum(0) {
    collum.resize(3, 0);  // Inicializar com zeros
}

bool Collum::IsFull() {
    return nElements == 3;
}

void Collum::addElem(int Elem) {
    if(!IsFull()) {
        for(int i = 2; i >= 0; i--) {
            if(collum[i] == 0) {
                collum[i] = Elem;
                nElements++;
                CalculateSum();
                break;
            }
        }
    }
}

void Collum::RemoveElem(int Elem) {
    if(nElements > 0) {
        for(int i = 0; i < 3; i++) {
            if(collum[i] == Elem) {
                collum[i] = 0;
                nElements--;
            }
        }
        CalculateSum();
        Rearange();
    }
}

void Collum::Rearange() {
    vector<int> temp;
    
    // Coleta os elementos não zero
    for(int i = 0; i < 3; i++) {
        if(collum[i] != 0) {
            temp.push_back(collum[i]);
        }
    }

    // Limpa a coluna e re-insere os elementos alinhados ao final
    fill(collum.begin(), collum.end(), 0);
    int index = 2;
    for(int i = temp.size() - 1; i >= 0; i--) {
        collum[index--] = temp[i];
    }
}

void Collum::PrintCollum() {
    for(int i = 0; i < 3; i++) {
        (collum[i] == 0) ? cout << "-" : cout << collum[i];
        cout << " ";
    }
    cout << endl;
}

int Collum::CalculateSum() {
    vector<int> Marks(6, 0);
    Sum = 0;

    for(int i = 0; i < 3; i++) {
        if(collum[i] != 0) {
            Marks[collum[i] - 1]++;
        }
    }

    for(int i = 0; i < 6; i++) {
        if(Marks[i] != 0) {
            if(Marks[i] == 3) {
                Sum += (i + 1) * 9; 
            } else if(Marks[i] == 2) {
                Sum += (i + 1) * 4; 
            } else {
                Sum += i + 1; 
            }
        }
    }
    return Sum;
}