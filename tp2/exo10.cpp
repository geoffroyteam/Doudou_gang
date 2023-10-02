#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main() {
    string const nomFichier("C:/c/scores.txt") ;

    ofstream monFlux(nomFichier.c_str()) ;

    if(monFlux) {
        //Les instructions seront situés ici pour modifier le fichier
    } else {
        cout << "ERREUR : Impossible d'ouvrir le fichier" << endl ;
    }
    monFlux.close() ;

    return 0 ;
}