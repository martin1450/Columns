#ifndef BLOQUE_H
#define BLOQUE_H
#include "Piezas.h"


class Bloque
{
    public:
        Bloque();
        int id();
        int ids[3];
        int pos[2];
        Piezas pieza [3];
        void cargar(const std::string& sprite);
        virtual ~Bloque();
    protected:
    private:
};

#endif // BLOQUE_H
