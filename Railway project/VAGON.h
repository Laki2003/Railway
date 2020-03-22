#ifndef VAGON_H_INCLUDED
#define VAGON_H_INCLUDED
#include "RESTORAN.h"
#include "AVION.h"
#include "KUPE.h"
#include <string.h>
#include <typeinfo>

template<class T>
class Vagon{

private:

    T vagon;
int sifravagona;
int razred;
public:

    Vagon():vagon(), sifravagona(0), razred(1){}
Vagon(int sifra,int klasa, int broj,SEDISTE s, bool t):vagon(broj, s, t), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, KUPE v,int broj, int brojsedista, bool k):vagon(v, broj, brojsedista, k), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, MENI m, bool s, bool k):vagon(m, s, k), sifravagona(sifra), razred(klasa){}
};

#endif // VAGON_H_INCLUDED
