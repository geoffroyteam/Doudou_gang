#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main() {
    string const nomFichier("C:/c/scores.txt") ;

    ifstream monFlux(nomFichier.c_str()) ;

    if(monFlux) {
        string ligne ; //On crée une variable pour stocker les lignes
        while(getline(monFlux, ligne)) {
            cout << ligne << endl ;
        }
    } else {
        cout << "ERREUR : Ipossible d'ouvrir le fichier." << endl ;
    }

    return 0 ;
}