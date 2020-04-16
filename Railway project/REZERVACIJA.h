#ifndef REZERVACIJA_H_INCLUDED
#define REZERVACIJA_H_INCLUDED
#include "ruta.h"
#include "RezervacijeiKarte.h"
class Rezervacija: public RezervacijeiKarte{
private:

Ruta* r;

int sifraKarte;
public:
    Rezervacija():RezervacijeiKarte(),sifraKarte(100), r(new Ruta()){}
    Rezervacija(int c, int s, RezervacijeiKarte ss, char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2, char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u, int start, int endp):
        RezervacijeiKarte(s, c),sifraKarte(ss.GetSifra()), r(new Ruta(g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u, start, endp)){}
Rezervacija(const Rezervacija& r):RezervacijeiKarte(r.sifra, r.cena), r(new Ruta(*r.r)){
printf("Unesite sifru karte na koju se ova rezervacija odnosi!");
scanf("%i", &sifraKarte);
}

int GetCena()const{return cena;}
Ruta* GetRuta() const {return r;}
void SetCena(int c){cena=c;}

 };

#endif // REZERVACIJA_H_INCLUDED
