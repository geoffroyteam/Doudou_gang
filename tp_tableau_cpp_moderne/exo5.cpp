#include <iostream>
#include <array>

int main() {
    std::array<int, 5> tab1 = {1, 5, 8, 9};
    std::array<int, 8> tab2;
    std::array<int, 5> tab3 = {20, 30, 50, 40, 60};

    std::cout << "Contenu de tab1 : ";
    for (int valeur : tab1) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    std::cout << "Taille de tab1 : " << tab1.size() << std::endl;
    std::cout << "Taille maximale de tab1 : " << tab1.max_size() << std::endl;
    std::cout << "Premier élément de tab1 : " << tab1.front() << std::endl;
    std::cout << "Dernier élément de tab1 : " << tab1.back() << std::endl;

    tab2.fill(5);

    std::cout << "Contenu de tab2 : ";
    for (int valeur : tab2) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    tab1.swap(tab3);

    std::cout << "Contenu de tab1 après l'échange : ";
    for (int valeur : tab1) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    std::cout << "Contenu de tab3 après l'échange : ";
    for (int valeur : tab3) {
        std::cout << valeur << " ";
    }
    std::cout << std::endl;

    return 0;
}
