#ifndef MASINA_HPP_INCLUDED
#define MASINA_HPP_INCLUDED

class Masina
{
protected:
    double masa;
    double snaga;
    string proizvodjac;
public:
    Masina();
    Masina(double m, double s, double p);
    virtual void detalji();
};

#endif // MASINA_HPP_INCLUDED
