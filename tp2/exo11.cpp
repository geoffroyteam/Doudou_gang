#include <iostream>
#include <fstream>
using namespace std ;

int main() {
    ofstream monFlux ;

    monFlux.open("C:/c/scores.txt") ;

    if(monFlux) {
        //Les instructions seront situés ici pour modifier le fichier
    } else {
        cout << "ERREUR : Impossible d'ouvrir le fichier." << endl ;
    }
    monFlux.close() ;

    return 0 ;
}