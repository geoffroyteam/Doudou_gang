#include <iostream>
#include <fstream>
#include <string>
using namespace std ;

int main() {
    string const nomFichier("C:/c/scores.txt") ;

    ifstream monFlux(nomFichier.c_str()) ;

    if(monFlux) {
        monFlux.seekg(0, ios::end) ;
        int taille ;
        taille = monFlux.tellg() ;
        cout << "Taille du fichier : " << taille << " octets." << endl ;
    } else {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl ;
    }

    return 0 ;
}