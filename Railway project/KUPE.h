#ifndef KUPE_H_INCLUDED
#define KUPE_H_INCLUDED

enum KUPE{KUSET, SPAVACA_KOLA};

class Kupe{
    private:
KUPE vrsta;
int brojSedistauKupeu;
bool klima;
int brojkupea;
    public:
        Kupe()
        {
            vrsta=KUSET;
            brojSedistauKupeu = 6;
            klima = true;
            brojkupea = 1;
        }
        Kupe(KUPE v,int broj, int brojsedista, bool k)
        {
            vrsta = v;
            brojSedistauKupeu = brojsedista;
            brojkupea = broj;
            klima = k;
        }
        Kupe(const Kupe &ku)
        {
            vrsta = ku.vrsta;
            brojSedistauKupeu = ku.brojSedistauKupeu;
            klima = ku.klima;
            brojkupea = ku.brojkupea;
        }
};

#endif // KUPE_H_INCLUDED
