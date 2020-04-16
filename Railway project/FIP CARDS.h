#ifndef FIP_CARDS_H_INCLUDED
#define FIP_CARDS_H_INCLUDED
#include "RezervacijeiKarte.h"
struct Datum{
 int dan;
 int mesec;
 int godina;
};
typedef Datum datum;
class FipCard: public RezervacijeiKarte
{
private:
    int brojkupona;
    int popust;
     datum datumizdavanja;
char* drzava;

public:
    FipCard(): RezervacijeiKarte(){
    brojkupona=4;
    datumizdavanja.dan = 1;
    datumizdavanja.mesec = 1;
    datumizdavanja.godina = 2020;
        drzava = "Srbija";
cena = 25;
      popust = 100;
    }
    FipCard(int c,int broj, int p, datum izdavanje, char* d, int s): RezervacijeiKarte(s, c)
    {
        brojkupona = broj;
        popust= p;
        datumizdavanja = izdavanje;
             drzava = d;

    }
    FipCard(const FipCard &fip):RezervacijeiKarte(fip.sifra, fip.cena)
    {
  brojkupona = fip.brojkupona;
  popust = fip.popust;
  datumizdavanja = fip.datumizdavanja;
  drzava = fip.drzava;

    }
    int GetBrojKupona() const {return brojkupona;}
    int GetPopust() const {return popust;}
    datum GetDatumIzdavanja() const {return datumizdavanja;}
    char* GetDrzava() const {return drzava;}
       void SetBrojKupona(int b){brojkupona = b;}
    void SetPopust(int p){popust = p;}
    void SetDatumIzdavanja(datum d){datumizdavanja = d;}
    void SetDrzava(char* d){drzava = d;}
       void iskoristikupon()
    {
        --brojkupona;
    }


};


#endif // FIP_CARDS_H_INCLUDED
