#include <stdio.h>
#include <string>
#include "Siths.h"

using namespace std;

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(80)
{

}

Siths::Siths(string nomheros, int vieheros, string nomarme, int puissancearme, int coteobscur) :
Heros(nomheros, vieheros, nomarme, puissancearme), m_coteobscur(coteobscur)
{

}

void Siths::uitliserLeCoteObscur(Heros &cible)
{
    cout << m_nomheros << "attaque avec une force de " << m_coteobscur << endl;
    cible.diminuerVie(m_coteobscur);
}