#include <iostream>
#include <cstdlib>
#include <memory>
#include "fonctions.hpp"
#include "personne.hpp"

using namespace std;

class Livre
{
private:
    int nombrePage;
    string titre;
    inline void afficherAttribut(string text, string attr)
    {
        cout << text << attr << endl;
    }

    /* data */
public:
    inline Livre()
    {
        nombrePage = 100;
        titre = "Le rêve d'une femme hardie";
        cout << "Création d'un livre" << endl;
    }
    inline ~Livre()
    {
    }

    inline void feuillet()
    {
        cout << "feuillet" << endl;
    }
    inline int getNombrePage() const
    {
        return nombrePage;
    }

    inline string getTitre() const
    {
        return titre;
    }

    inline void setNombrePage(const int nombrePage)
    {
        this->nombrePage = nombrePage;
    }

    inline void afficher()
    {
        afficherAttribut("Titre du livre : ", titre);
        cout << "Nombre de page du livre : " << nombrePage << endl;
    }

    double somme(double a, double b)
    {
        return a + b;
    }

    int somme(int a, int b)
    {
        return a + b;
    }
    int somme(int a, int b, int c)
    {
        return a + b + c;
    }

    int calcul(int a, int b)
    {
        return [](int d, int e) { return d + e; }(a, b);
       
    }
};

int main()
{ /********* Lesson 2 ********/
    // std::cout << "Lalekou Iyal GrayTchad fi formation C++\n" << std::endl;
    /********* Lesson 3 ********/
    /*  constexpr double PI{3.14};
    bool monbooleen(true);
    int nombre1{5};
    char caractere = 'Z';
    if (monbooleen == true)
    {
        std::cout << "Vrai"
                  << std::endl
                  << nombre1
                  << std::endl
                  << caractere
                  << std::endl;
    } */
    /********* Lesson 4********/
    /** std::cout << PI << std::endl;

    unsigned nombre2;
    std::cout << "Saisir votre nombre" << std::endl;

    std::cin >> nombre2;
    std::cout << "le factoriel de " << nombre2 << " est " << factoriel(nombre2) << std::endl;
    */
    /********* Lesson 5********/

    // int *nom_pointeur=NULL; notation C

    /* int nombre3 = 8;
    int *nom_pointeur{nullptr};
    nom_pointeur = &nombre3;
    std::cout << *nom_pointeur << std::endl;

    int *nom_pointeur2 = malloc(sizeof(int));
    *nom_pointeur2= 5;

    int *nom_pointeur2{new int(5)};

    std::cout << *nom_pointeur2 << std::endl
              << nom_pointeur2 << std::endl;

    delete nom_pointeur2;
    // free(nom_pointeur2);

    std::unique_ptr<int> nom_pointeur3{std::make_unique<int>(5)};
    std::unique_ptr<int[]> nom_pointeur4{std::make_unique<int[]>(6)};

    std::shared_ptr<int> pt_intelligent2{std::make_shared<int>(54)};
    nom_pointeur = nom_pointeur3.release();

    std::cout << *nom_pointeur << std::endl; */

    /********* Lesson 6 ********/

    /*     Personne personne1{};
    personne1.marcher();
    std::cout << personne1.nom << std::endl
              << personne1.age << std::endl;
    Personne personne2{1, "GRAYTCHAD"};
    personne2.marcher();

    std::cout << personne2.nom << std::endl
              << personne2.age << std::endl; */

    /********* Lesson 7 ********/

    Livre l1{};
    l1.afficher();
    l1.feuillet();
    l1.setNombrePage(300);

    l1.afficher();

    cout << l1.calcul(54, 46) << endl;

    return EXIT_SUCCESS;
}
