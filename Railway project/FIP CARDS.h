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
     datum datumisteka;
std::string drzava;
public:
    FipCard(){
    brojkupona=4;
    datumizdavanja.dan = 1;
    datumizdavanja.mesec = 1;
    datumizdavanja.godina = 2020;
        drzava = "Srbija";
      datumisteka.mesec = datumizdavanja.mesec+3;
      datumisteka.dan = datumizdavanja.dan;
      datumisteka.godina = 2020;
      popust = 100;
    }
    FipCard(int broj, int p, datum izdavanje, std::string d)
    {
        brojkupona = broj;
        popust= p;
        datumizdavanja = izdavanje;
        datumisteka.dan = datumizdavanja.dan;
        datumisteka.mesec = datumizdavanja.mesec+3;
        datumisteka.godina = datumizdavanja.godina;
        drzava = d;
    }
    FipCard(const FipCard &fip)
    {
  brojkupona = fip.brojkupona;
  popust = fip.popust;
  datumizdavanja = fip.datumizdavanja;
  datumisteka = fip.datumisteka;
  drzava = fip.drzava;
    }
};


#endif // FIP_CARDS_H_INCLUDED
