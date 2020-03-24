#ifndef OSOBA_H_INCLUDED
#define OSOBA_H_INCLUDED
#include "FIP CARDS.h"
enum Pol{MUSKI, ZENSKI};
class Osoba{
private:
char* ime;
char* prezime;
 datum datumRodjenja;
Pol pol;
public:
    Osoba()
{
    ime = "XXX";
    prezime = "YYY";
    datumRodjenja.dan = 1;
    datumRodjenja.mesec = 1;
    datumRodjenja.godina = 2020;
    pol = MUSKI;

}
Osoba(char* i, char* p, datum d, Pol pl)
{
    ime = i;
    prezime = p;
    datumRodjenja = d;
    pol = pl;
}
Osoba(const Osoba &o)
{
    ime = o.ime;
    prezime = o.prezime;
    datumRodjenja = o.datumRodjenja;
    pol = o.pol;
}
char* GetIme() const {return ime;}
char* GetPrezime() const {return prezime;}
datum GetDatum() const {return datumRodjenja;}
Pol getPol() const {return pol;}
void SetIme(char* i) {ime = i;}
void SetPrezime(char* p){prezime = p;}
void SetDatumRodjenja(datum d){datumRodjenja = d;}
void SetPol(Pol pl){pol = pl;}
};

#endif // OSOBA_H_INCLUDED
