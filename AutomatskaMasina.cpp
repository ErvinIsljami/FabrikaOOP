AutomatskaMasina::AutomatskaMasina(int pohabanost, double m, double s, double p)
{
    pohabanost = pohabanost;
    masa = m;
    snaga = s;
    proizvodjac = p;
}

bool AutomatskaMasina::ispravnost()
{
    return pohabanost != 100;
}

void AutomatskaMasina::detalji()
{
    cout<<"Masina proizvodjaca "<<proizvodjac<<", maksimalne snage "<<snaga<<"kw, mase"<<masa<<", ";
    cout<<"pohabanost "<<pohabanost<<" je trenutno ";
    if(ispravnost())
        cout<<"ispravna."<<endl;
    else
        cout<<"neispravna."<<endl;
}
