#include <iostream>
#include <string>
using namespace std;

class Personne
{
    void demenager(string nouvelle_adresse)
    {}

    void anniversaire()
    {}

    void changer_travail(string nouveau_travail)
    {}

    void marier(string nouveau_nom)
    {}

    string m_nom;
    string m_prenom;
    unsigned short m_age;
    string m_professeion;
    string m_adresse;
};

int main()
{
    Personne sarko, carlita, manu, bibi;
    carlita.marier("SARKOZY");
    bibi.marier("MACRON");
    manu.demenager("Palais de l'Elysée, 75000 PARIS");
    bibi.demenager("Palais de l'Elysée, 75000 PARIS");
    sarko.anniversaire();
    sarko.changer_travail("Hommes d'Affaires");
    carlita.changer_travail("Chanteuse");
    manu.changer_travail("Président de la République");
    bibi.changer_travail("Première Dame");

    return 0;
}