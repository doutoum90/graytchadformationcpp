#ifndef __PERSONNE__H__
#define __PERSONNE__H__
#include <iostream>
#include <string>

class Personne
{
public:
    /** les attributs***/
    int age;
    std::string nom;
    // char * nom;
    /** les methodes***/
    Personne();
    Personne(int age, std::string nom);
    ~Personne();
    void marcher();
};

#endif