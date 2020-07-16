#include "complexe.hpp"

double NombreComplexe::getReel() const { return reel; }
void NombreComplexe::setReel(double const reel) { this->reel = reel; }
double NombreComplexe::getImaginaire() const { return imaginaire; }
void NombreComplexe::setImaginaire(double const imaginaire) { this->imaginaire = imaginaire; }
NombreComplexe::NombreComplexe(double reel, double imaginaire) : reel(reel), imaginaire(imaginaire) {}
NombreComplexe::NombreComplexe() {}
