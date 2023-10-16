#ifndef Heros_h
#define Heros_h

#include <iostream>
#include <string>

class Heros
{
    protected:
        std::string m_nomheros;
        int m_vieheros;
        std::string m_nomarme;
        int m_puissancearme;
        
    public:
        Heros();
        Heros(std::string nomheros, int vieheors, std::string nomarme, int puissancearme);
        void diminuerVie(int vieenmoins);
        void attaquer(Heros&cible);
        bool vivant() const;
        void afficher()const;
};
#include "Heros.cpp"
#endif