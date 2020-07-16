

#ifndef __COMPLEXE___H__
#define __COMPLEXE___H__
class NombreComplexe
{
private:
    double reel, imaginaire;

public:
    NombreComplexe();
    NombreComplexe(double reel, double imaginaire);
    double getReel() const;
    void setReel(double const reel);
    double getImaginaire() const;
    void setImaginaire(double const imaginaire);
    inline NombreComplexe operator+(NombreComplexe complexe) const
    {
        complexe.setImaginaire(complexe.getImaginaire() + this->getImaginaire());
        complexe.setReel(complexe.getReel() + this->getReel());
        return complexe;
    }
};

#endif