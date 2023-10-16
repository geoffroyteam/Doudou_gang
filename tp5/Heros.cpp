#include <stdio.h>
#include "Heros.h"
#include "Humains.h"
#include "Robots.h"
using namespace std;
void Heros::diminuerVie(int vieenmoins)
{
    m_vieheros -= vieenmoins;
    if (m_vieheros<0)
        m_vieheros=0;
}

void Heros::attaquer(Heros&cible)
{
    cout<<m_nomheros<<"attaque"<<cible.m_nomheros<<endl;
    cible.diminuerVie(m_puissancearme);
}

bool Heros::vivant()const
{
    return(m_vieheros>0);
}

Heros::Heros() : m_nomheros("Inconnu"),m_vieheros(0)
{
}

Heros::Heros(string nomheros, int vieheros, string nomarme, int puissancearme)
{
    m_nomheros = nomheros;
    m_vieheros = vieheros;
    m_nomarme = nomarme;
    m_puissancearme = puissancearme ;
}

void Heros::afficher()const
{
    cout<<"Heros : "<<m_nomheros<<"\tVie : "<<m_vieheros<<endl;
    cout<<"Arme : "<<m_nomarme<<"\tPuissance de l'arme : "<<m_puissancearme<<endl;
    if(vivant() == true)
        cout <<"Heros Vivant"<<endl;
    else
        cout <<"Heros Mort"<<endl;
    cout<<"------------------"<<endl;
}