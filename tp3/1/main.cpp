#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{
    Personne sarko ("SARKOZY","Nicolas",62,"Avocat");
    Personne carlita ("BRUNI","Carla",50,"Mannequin");
    Personne manu ("MACRON", "Emmanuel",40,"Banquier");
    Personne bibi ("TROGNEUX","Brigitte",64,"Enseignante");

    cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();

    carlita.marier("SARKOZY");
    bibi.marier("MACRON");
    manu.demenager("Palais de l'Elysée, 75000 PARIS");
    bibi.demenager("Palais de l'Elysée, 75000 PARIS");
    sarko.anniversaire();
    sarko.changer_travail("Hommes d'Affaires");
    carlita.changer_travail("Chanteuse");
    manu.changer_travail("Président de la République");
    bibi.changer_travail("Première Dame");
    
    cout << "On affiche les informations des 4 personnages après l'utilisation des objets" << endl;
    sarko.afficher();
    carlita.afficher();
    manu.afficher();
    bibi.afficher();



    return 0;
}