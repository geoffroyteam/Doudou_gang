#ifndef Humain_h
#define Humain_h

#include "Heros.h"

class Humains : public Heros
{
    public:
        Humains(std::string nomheros, int vieheros, std::string nomarme, int puissancearme);
        Humains(std::string nomheros, int vieheros, std::string nomarme, int puissancearme, int forcepoing);
        void coupDePoing(Heros &cible);
        
    private:
        int m_forcepoing;
};
#include "Humains.cpp"
#endif