#include <iostream>

int main() {
    double somme = 0.0; 
    int nombreDeNotes = 0; 
    
    while (true) {
        double note;

        std::cout << "Entrez une note positive (ou un nombre négatif pour terminer) : ";
        std::cin >> note;
        
        if (note < 0) {
            break;
        }
        somme += note;
        nombreDeNotes++;
    }
    
    // Calcule la moyenne
    if (nombreDeNotes > 0) {
        double moyenne = somme / nombreDeNotes;
        std::cout << "La moyenne des notes est : " << moyenne << std::endl;
    } else {
        std::cout << "Aucune note valide n'a été entrée." << std::endl;
    }
    
    return 0;
}
