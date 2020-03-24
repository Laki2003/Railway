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
        KUPE GetVrsta() const {return vrsta;}
        int GetBrojSedistauKupeu() const {return brojSedistauKupeu;}
bool GetKlima() const{return klima;}
int GetBrojKupea() const {return brojkupea;}
void SetVrsta(KUPE v){vrsta = v;}
void SetBrojSedistauKuepu(int b) {brojSedistauKupeu = b;}
void SetKlima(bool k){klima = k;}
void SetBrojKupe(int b){brojkupea = b;}
};

#endif // KUPE_H_INCLUDED
