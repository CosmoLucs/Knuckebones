#include <iostream>
#include <vector>
#include "../Headers/Collum.hpp"
using namespace std;

Collum::Collum() : nElements(0) {
    // Initialize the collum array or any other necessary setup
    collum.resize(3);
}

bool Collum::IsFull() {
    if(nElements == 3) {
        return true;
    } else {
        return false;
    }
}

void Collum::addElem(int Elem) {
    if(!IsFull()) {
        for(int i = 2; i >= 0; i--) {
            if(collum[i] == 0) {
                collum[i] = Elem;
                nElements++;
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
        Rearange();
    }
}

/*função responsável por realocar números caso algum tenha sido removido*/
void Collum::Rearange() {
    int i,j;
    for(i = 0; i < 3; i++) {
        for(j = 0; j < 3; j++) {
            if(collum[j] != 0) {
                if(collum[j+1] == 0) {
                    collum[j+1] = collum[j];
                    collum[j] = 0;
                }
            }
        }
    }
}

void Collum::PrintCollum() {
    for(int i = 0; i < 3; i++) {
        (collum[i] == 0) ? cout << "-" : cout << collum[i];
        cout << " ";
    }
    cout << endl;
}