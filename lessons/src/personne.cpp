#include <iostream>
#include "personne.hpp"

void Personne::marcher()
{
    std::cout << "Entrain de marcher" << std::endl;
}

Personne::Personne() : age{0}, nom{"Inconnu"} {}

Personne::Personne(int age, std::string nom) : age{age}, nom{nom} {}

Personne::~Personne()
{
    std::cout << "destruction" << std::endl;
}