#include <iostream>
#include "personne.hpp"

void personnes::Personne::marcher()
{
    std::cout << "Entrain de marcher" << std::endl;
}

personnes::Personne::Personne() : age{0}, nom{"Inconnu"} {}

personnes::Personne::Personne(int age, std::string nom) : age{age}, nom{nom} {}

personnes::Personne::~Personne()
{
    std::cout << "destruction" << std::endl;
}