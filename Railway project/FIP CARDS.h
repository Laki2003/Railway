#ifndef FIP_CARDS_H_INCLUDED
#define FIP_CARDS_H_INCLUDED

struct Datum{
 int dan;
 int mesec;
 int godina;
};
typedef Datum datum;
class FipCard
{
private:
    int brojkupona;
    int popust;
     datum datumizdavanja;
char* drzava;
int cena;
public:
    FipCard(){
    brojkupona=4;
    datumizdavanja.dan = 1;
    datumizdavanja.mesec = 1;
    datumizdavanja.godina = 2020;
        drzava = "Srbija";
cena = 25;
      popust = 100;
    }
    FipCard(int c,int broj, int p, datum izdavanje, char* d)
    {
        brojkupona = broj;
        popust= p;
        datumizdavanja = izdavanje;
             drzava = d;
             cena = c;
    }
    FipCard(const FipCard &fip)
    {
  brojkupona = fip.brojkupona;
  popust = fip.popust;
  datumizdavanja = fip.datumizdavanja;
  drzava = fip.drzava;
  cena = fip.cena;
    }
    int GetBrojKupona() const {return brojkupona;}
    int GetPopust() const {return popust;}
    datum GetDatumIzdavanja() const {return datumizdavanja;}
    char* GetDrzava() const {return drzava;}
    int GetCena() const{return cena;}
    void SetBrojKupona(int b){brojkupona = b;}
    void SetPopust(int p){popust = p;}
    void SetDatumIzdavanja(datum d){datumizdavanja = d;}
    void SetDrzava(char* d){drzava = d;}
    void SetCena(int c){cena=c;}
    void iskoristikupon()
    {
        --brojkupona;
    }


};


#endif // FIP_CARDS_H_INCLUDED
