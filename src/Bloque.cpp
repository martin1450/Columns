#include "Bloque.h"
#include "Piezas.h"
#include <iostream>
#include <ctime>
Bloque::Bloque()
{
    srand((int)time(0));
    ids[0] = id();
    ids[1] = id();
    ids[2] = id();
    pos[0]=0;
    pos[1]=0;
}

int Bloque::id(){
    int x = (rand()%6)+0;
    return x;
}

void Bloque::cargar(const std::string& sprite){
    pieza[0].load(sprite, ids[0]);
    pieza[1].load(sprite, ids[1]);
    pieza[1].modificar(0,24);
    pieza[2].load(sprite, ids[2]);
    pieza[2].modificar(0,48);
}

Bloque::~Bloque()
{
    //dtor
}
