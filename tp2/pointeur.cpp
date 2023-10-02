#include <iostream>
using namespace std ;

int main() {
    int *pointeur(0) ;
    pointeur = new int ;

    cout << "Quel est votre age ?" << endl ;
    cin >> *pointeur ; //On écrit dans la case mémoire pointé par le pointeur "pointeur"

    cout << "Vous avez : " << *pointeur << " ans." << endl ; //On utilise à nouveau le pointeur

    delete pointeur ; //Ne pas oublier de libérer l'espace mémoire
    pointeur = 0 ; //Et de faire pointer le pointeur vers rien

    return 0 ;
} 