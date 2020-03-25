#ifndef VAGON_H_INCLUDED
#define VAGON_H_INCLUDED
#include "RESTORAN.h"
#include "AVION.h"
#include "KUPE.h"
#include "Metro.h"
#include "Teretni.h"
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
Vagon(int sifra, int klasa, int m, VRSTAROBE v, string n):vagon(m,v,n), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, int b, bool GSP, bool prilagodjen):vagon(b, GSP, prilagodjen), sifravagona(sifra), razred(klasa){}
Vagon(int sifra, int klasa, const T &a):vagon(a),sifravagona(sifra), razred(klasa){}
Vagon(const Vagon &a)
{
    vagon = a.vagon;
    sifravagona = a.sifravagona;
    sifravagona = a.razred;
}
T getVagon() const {return vagon;}
int GetSifraVagona() const {return sifravagona;}
int GetRazred() const {return razred;}
void SetVagon(T &v){vagon = v;}
void SetSifraVagona(int b){sifravagona = b;}
void SetRazred(int r){razred = r;}
};

#endif // VAGON_H_INCLUDED
