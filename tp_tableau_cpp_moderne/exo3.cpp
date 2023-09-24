#include <iostream>
#include <vector>

int main() {
    int tableauInitial[] = {12, 7, 8, 15, 20, 9, 14, 6, 5, 18};
    int taille = sizeof(tableauInitial) / sizeof(tableauInitial[0]);
    std::vector<int> nombresPairs;
    std::vector<int> nombresImpairs;
    for (int i = 0; i < taille; ++i) {
        if (tableauInitial[i] % 2 == 0) {
            // Nombre pair
            nombresPairs.push_back(tableauInitial[i]);
        } else {
            // Nombre impair
            nombresImpairs.push_back(tableauInitial[i]);
        }
    }

    // Affichage des résultats
    std::cout << "Nombres pairs : ";
    for (int nombre : nombresPairs) {
        std::cout << nombre << " ";
    }
    std::cout << std::endl;

    std::cout << "Nombres impairs : ";
    for (int nombre : nombresImpairs) {
        std::cout << nombre << " ";
    }
    std::cout << std::endl;

    return 0;
}
