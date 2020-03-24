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

std::string drzava;
public:
    FipCard(){
    brojkupona=4;
    datumizdavanja.dan = 1;
    datumizdavanja.mesec = 1;
    datumizdavanja.godina = 2020;
        drzava = "Srbija";

      popust = 100;
    }
    FipCard(int broj, int p, datum izdavanje, std::string d)
    {
        brojkupona = broj;
        popust= p;
        datumizdavanja = izdavanje;
             drzava = d;
    }
    FipCard(const FipCard &fip)
    {
  brojkupona = fip.brojkupona;
  popust = fip.popust;
  datumizdavanja = fip.datumizdavanja;
  drzava = fip.drzava;
    }
    int GetBrojKupona() const {return brojkupona;}
    int GetPopust() const {return popust;}
    datum GetDatumIzdavanja() const {return datumizdavanja;}
    string GetDrzava() const {return drzava;}
    void SetBrojKupona(int b){brojkupona = b;}
    void SetPopust(int p){popust = p;}
    void SetDatumIzdavanja(datum d){datumizdavanja = d;}
    void SetDrzava(string d){drzava = d;}
    void iskoristikupon()
    {
        --brojkupona;
    }

};


#endif // FIP_CARDS_H_INCLUDED
