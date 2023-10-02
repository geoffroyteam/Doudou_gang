#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main() {
    string const nomFichier("C:/c/scores.txt") ;

    ifstream monFlux(nomFichier.c_str()) ;

    if(monFlux) {
        cout << "Pas de soucis lors de l'ouverture du fichier." << endl ;
        //Les instructions seront situés ici pour modifier ce fichier
    } else {
        cout << "ERREUR : Ipossible d'ouvrir le fichier." << endl ;
    }

    return 0 ;
}