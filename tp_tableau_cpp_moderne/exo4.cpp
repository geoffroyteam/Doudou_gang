#include <iostream>

int main() {
    char tableau[] = {'a', 'b', 'c', 'a', 'd', 'e', 'a', 'f', 'a'};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    char lettreRecherchee;
    std::cout << "Entrez la lettre que vous souhaitez rechercher : ";
    std::cin >> lettreRecherchee;
    int compteur = 0;
    for (int i = 0; i < taille; ++i) {
        if (tableau[i] == lettreRecherchee) {
            compteur++;
        }
    }

    // Affichage du résultat
    std::cout << "Le nombre d'occurrences de la lettre '" << lettreRecherchee << "' est : " << compteur << std::endl;

    return 0;
}
