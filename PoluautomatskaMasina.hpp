#ifndef POLUAUTOMATSKAMASINA_HPP_INCLUDED
#define POLUAUTOMATSKAMASINA_HPP_INCLUDED

#include "Masina.hpp"

class PoluautomatskaMasina : Masina
{
private:
    int brojRadnika;
    int brojRadnihMesta;
public:
    PoluautomatskaMasina(int brm, double m, double s, double p);
    PoluautomatskaMasina(int br, int brm, double m, double s, double p);
    bool dodajRadnike(int br);
    bool ukloniRadnike(int br);
    double trenutnaSnaga();
    void detalji();
};

#endif // POLUAUTOMATSKAMASINA_HPP_INCLUDED
