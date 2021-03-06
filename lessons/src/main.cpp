#include <iostream>
#include <cstdlib>
#include <memory>
#include <fstream>
#include <string>
#include <list>
#include <vector>
#include "fonctions.hpp"
#include "personne.hpp"
#include "complexe.hpp"

using namespace std;

/* int somme(int a, int b) { return a + b; }
float somme(float a, float b) { return a + b; }
double somme(double a, double b) { return a + b; } */
// auto somme =[](auto a, auto b) { return a + b; };
template <class T>
T somme(T a, T b) { return a + b; }

template <class T>
class Pile
{
public:
    T element;
};
ostream &operator<<(ostream &os, NombreComplexe complex)
{
    os << complex.getReel() << " + i*" << complex.getImaginaire() << endl;
    return os;
}

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

    /********* Lesson 8 ********/
    /*[zone de capture]
    (paramètres de la lambda) 
    -> 
    type de retour { instructions }
    */
    /*    auto somme = [](auto const &nb1, auto const &nb2) { return nb1 + nb2; };
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
    personne.marcher(); */

    /********* Lesson 9 ********/
    /* ofstream nomFluxEcriture{"fichiers/graytchad.txt"};
    int nb = 5;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture << nb << endl;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture << "Lalekou Gray Tchad" << endl;
    nomFluxEcriture.close();

    ifstream nomFluxLecture{"fichiers/graytchad.txt"};
    string mot1, mot2;
    getline(nomFluxLecture, mot2);
    cout << mot2 << endl;
    getline(nomFluxLecture, mot2);
    nomFluxLecture >> mot1;
    cout << mot2 << endl
         << mot1 << endl; */

    /********* Lesson 10 ********/

    /* string nomChaine{"Lalekou gray Tchad"};

    cout << nomChaine.size() << nomChaine << endl;
    nomChaine.erase();
    cout << nomChaine.size() << nomChaine << endl;

    const string chaine2 = nomChaine.substr(4, 8);
    cout << chaine2 << endl
         << chaine2.empty() << endl;
    nomChaine.append(" fi formation C++ maaya le Doutoum");
    cout << nomChaine; */

    /********* Lesson 11 ********/

    /* list<personnes::Personne> maListe;
    personnes::Personne p1, p2, p3, p4;
    maListe.push_back(p1);
    maListe.push_front(p1);
    for (auto i = maListe.begin(); i != maListe.end(); i++)
        (*i).marcher(); 
    list<int> malisteEntier;
    malisteEntier.push_front(1);
    malisteEntier.push_front(2);
    malisteEntier.push_front(3);
    malisteEntier.push_front(4);

    malisteEntier.push_back(0);
    malisteEntier.push_back(-1);
    for (auto i = malisteEntier.begin(); i != malisteEntier.end(); i++)
        cout << *i << endl; 

    vector<int> monVecteurEntier;
    monVecteurEntier.push_back(1);
    monVecteurEntier.push_back(2);
    monVecteurEntier.push_back(3);
    monVecteurEntier.push_back(4);

    monVecteurEntier.push_back(0);
    monVecteurEntier.push_back(-1);
    for (auto i = monVecteurEntier.begin(); i != monVecteurEntier.end(); i++)
        cout << *i << endl;
        */

    /********* Lesson 12 ********/
    int a = 5, b = 8;

    NombreComplexe c1{0, 1}, c2{1, 0};

    cout << c1 + c2 << endl;
    cout << c1 << c2 << endl;

    cout << somme(a, b) << endl;

    Pile<int> pileEntier;
    pileEntier.element = 5;
    cout << pileEntier.element << endl;

    Pile<NombreComplexe> pileComplexe;
    pileComplexe.element = {4, 3};

    cout << pileComplexe.element;
    return EXIT_SUCCESS;
}
