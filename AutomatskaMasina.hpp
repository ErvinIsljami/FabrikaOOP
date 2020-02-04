#ifndef AUTOMATSKAMASINA_HPP_INCLUDED
#define AUTOMATSKAMASINA_HPP_INCLUDED

#include "Masina.hpp"

class AutomatskaMasina : Masina
{
private:
    int pohabanost;
public:
    AutomatskaMasina(int pohabanost, double m, double s, double p);
    bool ispravnost();
    void detalji();
};

#endif // AUTOMATSKAMASINA_HPP_INCLUDED
