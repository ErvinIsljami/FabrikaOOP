#include <iostream>
#include "PoluautomatskaMasina.hpp"

using namespace std;

PoluautomatskaMasina::PoluautomatskaMasina(int brm, double m, double s, double p)
{
    brojRadnihMesta = brm;
    brojRadnika = 0;
    masa = m;
    snaga = s;
    proizvodjac = p;
}
PoluautomatskaMasina::PoluautomatskaMasina(int br, int brm, double m, double s, double p)
{
    brojRadnihMesta = brm;
    brojRadnika = br;
    masa = m;
    snaga = s;
    proizvodjac = p;
}
bool PoluautomatskaMasina::dodajRadnike(int br)
{
    if(brojRadnika + br < brojRadnihMesta)
    {
        brojradnika += br;
        return true;
    }
    return false;
}

bool PoluautomatskaMasina::ukloniRadnike(int br)
{
    if(brojRadnika - br > 0)
    {
        brojradnika -= br;
        return true;
    }
    return false;
}

double PoluautomatskaMasina::trenutnaSnaga()
{
    return snaga * (brojRadnika / brojRadnihMesta);
}

void PoluautomatskaMasina::detalji()
{
    cout<<"Masina proizvodjaca "<<proizvodjac<<", maksimalne snage "<<snaga<<"kw, mase"<<masa<<", ";
    cout<<"kapciteta radnih mesta "<<brojRadnihMesta<<" radnika na kojoj je angazovano "<<brojRadnika<<" radnika."<<endl;
}
