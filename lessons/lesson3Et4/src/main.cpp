#include <iostream>
#include <cstdlib>
#include "fonctions.hpp"

int main()
{
    constexpr double PI{3.14};
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
    }
    std::cout << PI << std::endl;

    unsigned nombre2;
    std::cout << "Saisir votre nombre" << std::endl;

    std::cin >> nombre2;
    std::cout << "le factoriel de " << nombre2 << " est " << factoriel(nombre2) << std::endl;

    return EXIT_SUCCESS;
}