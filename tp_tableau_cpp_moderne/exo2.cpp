#include <iostream>

int main() {
    int tableau[] = {34, 12, 45, 78, 23, 56, 89, 9, 67, 42};
    int taille = sizeof(tableau) / sizeof(tableau[0]);
    int plusPetit = tableau[0];
    int plusGrand = tableau[0];
    for (int i = 1; i < taille; ++i) {
        if (tableau[i] < plusPetit) {
            plusPetit = tableau[i];
        }
        if (tableau[i] > plusGrand) {
            plusGrand = tableau[i];
        }
    }

    // Affichage des résultats
    std::cout << "Le plus petit élément du tableau est : " << plusPetit << std::endl;
    std::cout << "Le plus grand élément du tableau est : " << plusGrand << std::endl;

    return 0;
}
