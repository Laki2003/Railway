#ifndef KUPE_H_INCLUDED
#define KUPE_H_INCLUDED
#include "VAGON.h"
enum KUPE{KUSET, SPAVACA_KOLA};

class Kupe: public Vagon{
    private:
KUPE vrsta;
int brojSedistauKupeu;
bool klima;
int brojkupea;
    public:
        Kupe():Vagon()
        {
            vrsta=KUSET;
            brojSedistauKupeu = 6;
            klima = true;
            brojkupea = 1;
        }
        Kupe(KUPE v,int broj, int brojsedista, bool k, int sifra, int r):Vagon(sifra, r)
        {
            vrsta = v;
            brojSedistauKupeu = brojsedista;
            brojkupea = broj;
            klima = k;
        }
        Kupe(const Kupe &ku):Vagon(ku.sifravagona, ku.razred)
        {
            vrsta = ku.vrsta;
            brojSedistauKupeu = ku.brojSedistauKupeu;
            klima = ku.klima;
            brojkupea = ku.brojkupea;
        }
        ~Kupe(){};
        char* GetTip()const {
        switch(vrsta){
    case KUSET:
        return "Kuset";
    case SPAVACA_KOLA:
        return "Spavaca kola";
        }
        }
        int GetBrojSedistauKupeu() const {return brojSedistauKupeu;}
bool GetOprema() const{return klima;}
int GetBrojKupea() const {return brojkupea;}
void SetTip(int v){
switch(v)
{
case 1:
    vrsta = KUSET;
    break;
case 2:
    vrsta = SPAVACA_KOLA;
    break;
}
}
void SetBrojSedistauKuepu(int b) {brojSedistauKupeu = b;}
void SetOprema(bool k){klima = k;}
void SetBrojKupea(int b){brojkupea = b;}
};

#endif // KUPE_H_INCLUDED
