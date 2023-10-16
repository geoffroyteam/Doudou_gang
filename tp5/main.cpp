#include <iostream>
#include "Heros.h"
#include "Jedis.h"
#include "Siths.h"
#include "Humains.h"
#include "Robots.h"

using namespace std;

int main()
{

    Jedis yoda("Maitre Yoda", 260,"Sabre Laser",50);
    Jedis luke("Luke Skywalker", 450, "Sabre Laser", 50,200);
    Siths palpatine("Empereur Palpatine",250, "Sabre Laser", 50);
    Siths vador("Dark Vador", 400, "Sabre Laser",50,90);
    Humains leia("Princesse Leia", 100, "Pistolet Laser", 30);
    Humains solo("Han Solo", 150, "Pistolet Laser",30,60);
    Robots r2d2("R2D2", 50, "Pistolet Laser", 30);
    Robots c3po("C-3PO", 80, "Laser", 30,40);
    
    yoda.afficher();
    luke.afficher();
    palpatine.afficher();
    vador.afficher();
    leia.afficher();
    solo.afficher();
    r2d2.afficher();
    c3po.afficher();
    cout << endl;

    yoda.attaquer(vador);
    vador.attaquer(luke);
    luke.attaquer(palpatine);
    palpatine.attaquer(yoda);
    leia.attaquer(vador);
    solo.attaquer(palpatine);
    r2d2.attaquer(vador);
    c3po.attaquer(palpatine);
    palpatine.uitliserLeCoteObscur(luke);
    vador.uitliserLeCoteObscur(yoda);
    leia.coupDePoing(vador);
    solo.coupDePoing(vador);
    r2d2.utiliserLesGadgets(palpatine);
    c3po.utiliserLesGadgets(vador);
    luke.utiliserLaForce(vador);
    yoda.utiliserLaForce(palpatine);
    cout << endl;

    yoda.afficher();
    luke.afficher();
    palpatine.afficher();
    vador.afficher();
    leia.afficher();
    solo.afficher();
    r2d2.afficher();
    c3po.afficher();
    cout << endl;

    return 0;
}