#ifndef Personne_h
#define Personne_h

#include <string>

class Personne
{
    public:
        Personne();
        Personne(std::string nom, std::string prenom, unsigned short age,std::string profession);
        void demenager(std::string nouvelle_adresse);
        void anniversaire();
        void changer_travail(std::string nouvelle_travail);
        void marier(std::string nouvelle_nom);
        void afficher() const;
    
    private:
        std::string m_nom;
        std::string m_prenom;
        unsigned short m_age;
        std::string m_profession;
        std::string m_adresse;

};
#include "Personne.cpp"
#endif