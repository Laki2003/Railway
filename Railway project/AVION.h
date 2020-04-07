#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED
#include "VAGON.h"
enum TIP {KOZNO, STOF};
class Avion: public Vagon {
private:
    int brojsedista;
    TIP sediste;
    bool sto;
public:
    Avion(): Vagon()
    {
        brojsedista = 0;
        sediste = STOF;
        sto = true;
    }
    Avion(int broj, TIP s, bool t, int sifra, int r):Vagon(sifra, r)
    {
        brojsedista = broj;
        sediste = s;
        sto= t;
    }
    Avion(const Avion &a):Vagon(a.sifravagona, a.razred)
    {
        brojsedista = a.brojsedista;
        sediste = a.sediste;
        sto = a.sto;
    }
    ~Avion(){};
    char* GetTip() const{
    switch(sediste)
    {
    case KOZNO:
        return "Kozno";
    case STOF:
        return "Stof";
    }
    }
    int GetBrojSedista() const {return brojsedista;}
    bool GetOprema()const{return sto;}
    void SetTip(int s){
    switch(s){
case 1:
    sediste = KOZNO;
    break;
    case 2:
     sediste = STOF;
     break;
    }
        }
    void SetbrojSedista(int broj) {brojsedista = broj;}
    void SetOprema(bool s){sto = s;}
};

#endif // AVION_H_INCLUDED
