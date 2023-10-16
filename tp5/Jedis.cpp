#include <stdio.h>
#include "Jedis.h"
#include <string>

using namespace std;

Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_force(100)
{
}

Jedis::Jedis(string nomheros, int vieheros, string nomarme, int puissancearme, int force) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_force(force)
{
}

void Jedis::utiliserLaForce(Heros &cible)
{
    cout<<m_nomheros<<" attaque avec une force de "<<m_force<<endl;
    cible.diminuerVie(m_force);
}