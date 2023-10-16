#include <stdio.h>
#include <string>

using namespace std;

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(50)
{
}

Humains::Humains(string nomheros, int vieheros, string nomarme, int puissancearme, int forcepoing) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_forcepoing(forcepoing)
{
}

void Humains::coupDePoing(Heros &cible)
{
    cout<<m_nomheros<<" attaque avec une force de "<<m_forcepoing<<endl;
    cible.diminuerVie(m_forcepoing);
}
#include "Humains.h"