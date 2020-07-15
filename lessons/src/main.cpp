#include <iostream>
#include <cstdlib>
#include <memory>
#include "fonctions.hpp"
#include "personne.hpp"

using namespace std;

namespace namespace1
{
    void test()
    {
        cout << "bonjour depuis namespace 1" << endl;
    }
} // namespace namespace1
namespace bibliotheque
{
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
        inline Livre(Livre const &livre)
        {
            cout << "creation par reference" << endl;
            this->titre = livre.titre;
            this->nombrePage = livre.nombrePage;
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

} // namespace bibliotheque

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

    /* Livre l1{};
    l1.afficher();
    l1.feuillet();
    l1.setNombrePage(300);

    l1.afficher();

    cout << l1.calcul(54, 46) << endl;*/

    /*** Lesson8****/
    /*[zone de capture]
    (paramètres de la lambda) 
    -> 
    type de retour { instructions }
    */
    auto somme = [](auto const &nb1, auto const &nb2) { return nb1 + nb2; };
    cout << somme(4, 5);
    int a = 5, b = 8;
    cout << "a=" << a << "b=" << b << endl;
    auto inverser = [](int &a, int &b) -> void { int temp = a; a = b; b=temp; };
    inverser(a, b);
    cout << "a=" << a << "b=" << b << endl;

    bibliotheque::Livre l3;
    bibliotheque::Livre l4{l3};
    l3.afficher();
    l4.afficher();
    namespace1::test();

    personnes::Personne personne;
    personne.marcher();

    return EXIT_SUCCESS;
}
