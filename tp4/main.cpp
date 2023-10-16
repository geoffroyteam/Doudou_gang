#include <iostream>
#include "Heros.h"

using namespace std;
int main()
{
    Heros yoda("Maitre Yoda", 80, "Force", 50);
    Heros luke("Luke Skywalker", 150, "Sabre Laser", 40);
    Heros leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Heros solo("Han Solo", 100, "Pistolet Laser", 30);
    Heros chewie("Chewbacca", 100, "Pistolet Laser", 30);
    Heros obiwan("Obi-Wan Kenobi", 90, "Force", 50);
    Heros r2d2("R2-D2", 50, "Gadjets", 5);
    Heros palpatine("Empereur Palpatine", 150, "Force", 50);
    Heros vador("Dark Vador", 200, "Force", 50);

    Heros rey("Rey", 100, "Sabre Laser", 40);
    Heros finn("Finn", 100, "Sabre Laser", 30);
    Heros bb8("BB-8", 50, "Gadjets", 5);
    Heros kylo("Kylo Ren", 150, "Sabre Laser", 40);
    Heros premier("Premier Ordre", 200, "Force", 50);
    


        cout << "****************** Avant le Combat ******************" << endl;

    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();

    vador.attaquer(luke);
    luke.attaquer(vador);
    obiwan.attaquer(vador);
    r2d2.attaquer(palpatine);
    palpatine.attaquer(r2d2);

        cout << "****************** Pendant le Combat ******************" << endl;

    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();


    luke.changerarme("Force",50);
    luke.attaquer(palpatine);
    chewie.attaquer(vador);
    leia.attaquer(palpatine);
    solo.attaquer(vador);
    palpatine.attaquer(solo);
    luke.attaquer(vador);

            cout << "****************** Pendant le Combat ******************" << endl;

    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();


    solo.attaquer(palpatine);
    yoda.attaquer(palpatine);

        cout << "****************** Fin le Combat ******************" << endl;

    yoda.afficher();
    luke.afficher();
    leia.afficher();
    solo.afficher();
    chewie.afficher();
    obiwan.afficher();
    r2d2.afficher();
    palpatine.afficher();
    vador.afficher();

return 0;
}