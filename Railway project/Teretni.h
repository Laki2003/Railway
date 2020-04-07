#ifndef TERETNI_H_INCLUDED
#define TERETNI_H_INCLUDED
#include "VAGON.h"
enum VRSTAROBE{RID, OSTALO};
class Teretni: public Vagon{
    private:
int masarobekg;
VRSTAROBE vrstarobe;
char* nazivrobe;
public:
Teretni(): Vagon()
{
    masarobekg = 8000;
    vrstarobe = OSTALO;
    nazivrobe = "Prehrambreni proizvodi";
}
Teretni(int m, VRSTAROBE v, char* n, int sifra, int r): Vagon(sifra, r)
{
    masarobekg = m;
    vrstarobe = v;
    nazivrobe = n;
}
Teretni(const Teretni &t): Vagon(t.sifravagona, t.razred)
{
    masarobekg = t.masarobekg;
    vrstarobe = t.vrstarobe;
    nazivrobe = t.nazivrobe;
}
~Teretni(){};
int GetMasaRobe() const {return masarobekg;}
char* GetTip() const {
switch(vrstarobe)
{
case RID:
    return "RID";
case OSTALO:
    return "Ostalo";
}
}
char* GetNazivRobe() const {return nazivrobe;}
void SetMasaRobe(int m) {masarobekg = m;}
void SetTip(int v) {
switch(v)
{
case 1:
    vrstarobe = RID;
    break;
case 2:
    vrstarobe = OSTALO;
break;
}
}
void SetNazivRobe(char* n){nazivrobe = n;}
};

#endif // TERETNI_H_INCLUDED
