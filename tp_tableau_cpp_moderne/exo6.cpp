#include <iostream>
int main() {
    int tableau1[3][4];
    int tableau2[3][4] = {0};
    int tableau3[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {9, 10, 11, 12}};
    int tableau4[3][4] = {
        {1, 2, 3, 4},
        {5, 6, 7, 8},
        {9, 10, 11, 12}
    };

    // Affichage du contenu des tableaux
    std::cout << "Contenu du tableau1 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << tableau1[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Contenu du tableau2 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << tableau2[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Contenu du tableau3 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << tableau3[i][j] << " ";
        }
        std::cout << std::endl;
    }

    std::cout << "Contenu du tableau4 : " << std::endl;
    for (int i = 0; i < 3; ++i) {
        for (int j = 0; j < 4; ++j) {
            std::cout << tableau4[i][j] << " ";
        }
        std::cout << std::endl;
    }

    return 0;
}
