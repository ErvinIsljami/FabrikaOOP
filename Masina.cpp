#include "Masina.hpp"

#include<iostream>>
using namespace std;

Masina::Masina()
{
    masa = 0;
    snaga = 0;
    proizvodjac = "";
}

Masina::Masina(double m, double s, double p)
{
    masa = m;
    snaga = s;
    proizvodjac = p;
}

void Masina::detalji()
{
    cout<<"Masina proizvodjaca "<<proizvodjac<<", maksimalne snage "<<snaga<<"kw, mase"<<masa<<"."<<endl;
}
