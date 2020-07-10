#include <iostream>
#include <cstdlib>

int main()
{
    bool monbooleen(true);
    int nombre{5};
    char caractere = 'Z';
    if (monbooleen == true)
    {
        std::cout << "Vrai"
                  << std::endl
                  << nombre
                  << std::endl
                  << caractere
                  << std::endl;
    }
    return EXIT_SUCCESS;
}