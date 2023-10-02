#include <iostream>
using namespace std;
int main()

{
    double pi(3.14159);
    bool lampe(true);
    char lettre('A');
    string chaine("C'est une chaine de caracteres");

    cout << "Le chiffre pi a comme valeur : " << pi << "." << endl;
    cout << "La lampe est : " << lampe << " (0 pour eteinte et 1 pour allumee)." << endl;
    cout << "La lettre a afficher est : " << lettre << "." << endl;
    cout << "La chaine de caracteres a afficher est : " << chaine << "." << endl;

    return 0;
} 
