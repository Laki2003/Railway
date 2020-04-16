#ifndef VAGONTERETNI_H_INCLUDED
#define VAGONTERETNI_H_INCLUDED


#include "VAGON.h"
#include <string.h>
enum VRSTAROBE{RID, OSTALO};
class Teretni : public Vagon{
    private:
int masarobekg;
VRSTAROBE vrstarobe;
char nazivrobe[30];
public:
Teretni(): Vagon()
{
    masarobekg = 8000;
    vrstarobe = OSTALO;
char* n = "Prehrambreni proizvodi";
  int i;
  for( i=0;i<strlen(n);++i){nazivrobe[i]=n[i];}
  nazivrobe[i]='\0';
}
Teretni(int m, VRSTAROBE v, char* n, int sifra, int r): Vagon(sifra, r)
{
    masarobekg = m;
    vrstarobe = v;
       int i;
for(i=0;i<strlen(n);++i)
{
    nazivrobe[i]=n[i];
}
nazivrobe[i] = '\0';
}

Teretni(const Teretni &t): Vagon(t.sifravagona, t.razred)
{
    masarobekg = t.masarobekg;
    vrstarobe = t.vrstarobe;
   int i;
   for(i=0;i<strlen(t.nazivrobe);++i){nazivrobe[i] = t.nazivrobe[i];}
   nazivrobe[i] = '\0';
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
char* GetNazivRobe()  {return nazivrobe;}
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
void SetNazivRobe(char* n){int i; for(i=0;i<strlen(n);++i){nazivrobe[i] = n[i];}
nazivrobe[i]='\0';
}
};

#endif // VAGONTERETNI_H_INCLUDED
