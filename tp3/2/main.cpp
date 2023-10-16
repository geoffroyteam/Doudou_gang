#include <iostream>
#include "Personne.h"
using namespace std;

int main()
{

    Personne flanby ("HOLLANDE","François",67,"Fonctionnaire");
    Personne sego ("ROYAL","BLANQUER",68,"Ministre");
    Personne jeanmimi ("HOLLANDE","François",57,"Ministre");
    Personne aure ("DEVOS","Aurélia",42,"Magistrate");

    cout << "On affiche les informations des 4 personnages avant l'utilisation des objets" << endl;
    flanby.afficher();
    sego.afficher();
    jeanmimi.afficher();
    aure.afficher();

    aure.changer_travail("Retraité");
    flanby.changer_travail("Retraité");

    sego.marier("BLANQUER");
    
    sego.anniversaire();
    jeanmimi.anniversaire();

    sego.marier("ROYAL");
    aure.marier("DEVOS");


    cout << "On affiche les informations des 4 personnages après l'utilisation des objets" << endl;
    flanby.afficher();
    sego.afficher();
    jeanmimi.afficher();
    aure.afficher();



    return 0;
}