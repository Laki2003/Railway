#ifndef VAGON_H_INCLUDED
#define VAGON_H_INCLUDED
#include "RESTORAN.h"
#include "AVION.h"
#include "KUPE.h"
#include "Metro.h"
#include "Teretni.h"
#include <string.h>
#include <typeinfo>


class Vagon : public Metro, public Avion, public Kupe, public Restoran, public Teretni  {
private:

int sifravagona;
int razred;

public:

    Vagon():Metro(),  sifravagona(0), razred(0){}
Vagon(int sifra,int klasa, int broj,SEDISTE s, bool t):Avion(broj, s, t), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, KUPE v,int broj, int brojsedista, bool k):Kupe(v, broj, brojsedista, k), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, MENI m, bool s, bool k):Restoran(m, s, k), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int m, VRSTAROBE v, string n):Teretni(m,v,n), sifravagona(sifra), razred(0){}
Vagon(int sifra, int b, bool GSP, bool prilagodjen):Metro(b, GSP, prilagodjen), sifravagona(sifra), razred(0){}

/*Vagon(int sifra, const Metro & m): sifravagona(sifra), razred(0), Metro(m){}
Vagon(int sifra, int klasa, const Restoran & m): sifravagona(sifra), razred(klasa), Restoran(m){}
Vagon(int sifra, int klasa, const Kupe & m): sifravagona(sifra), razred(klasa), Kupe(m){}
Vagon(int sifra,  const Teretni & m): sifravagona(sifra), razred(0), Teretni(m){}
Vagon(int sifra, int klasa, const Avion & m): sifravagona(sifra), razred(klasa), Avion(m){}*/
Vagon(const Vagon &a)
{
    sifravagona = a.sifravagona;
    sifravagona = a.razred;
}
int GetSifraVagona() const {return sifravagona;}
int GetRazred() const {return razred;}
void SetSifraVagona(int b){sifravagona = b;}
void SetRazred(int r){razred = r;}
};

#endif // VAGON_H_INCLUDED
