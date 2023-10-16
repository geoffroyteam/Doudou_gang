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

    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();



    vador.attaquer(luke);
    luke.attaquer(vador);
    obiwan.attaquer(vador);
    r2d2.attaquer(palpatine);
    palpatine.attaquer(r2d2);
    
    rey.attaquer(kylo);
    finn.attaquer(kylo);
    kylo.attaquer(rey);


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

    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();




    luke.changerarme("Force",50);
    luke.attaquer(palpatine);
    chewie.attaquer(vador);
    leia.attaquer(palpatine);
    solo.attaquer(vador);
    palpatine.attaquer(solo);
    luke.attaquer(vador);

    bb8.attaquer(kylo);
    rey.attaquer(kylo);
    finn.attaquer(kylo);
    bb8.attaquer(kylo);




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
    
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();


    solo.attaquer(palpatine);
    yoda.attaquer(palpatine);


    premier.attaquer(finn);
    rey.changerarme("Force",80);
    rey.attaquer(premier);
    finn.attaquer(premier);
    bb8.attaquer(premier);
    premier.attaquer(bb8);



            cout << "****************** Pendant le Combat ******************" << endl;
    
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();



    finn.changerarme("Sabre Laser de Rey", 40);
    rey.attaquer(premier);
    finn.attaquer(premier);
    rey.attaquer(premier);



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
    
    rey.afficher();
    finn.afficher();
    bb8.afficher();
    kylo.afficher();
    premier.afficher();

return 0;
}