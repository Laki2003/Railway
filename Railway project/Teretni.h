#ifndef TERETNI_H_INCLUDED
#define TERETNI_H_INCLUDED

enum VRSTAROBE{RID, OSTALO};
class Teretni{
    private:
int masarobekg;
VRSTAROBE vrstarobe;
char* nazivrobe;
public:
Teretni()
{
    masarobekg = 8000;
    vrstarobe = OSTALO;
    nazivrobe = "Prehrambreni proizvodi";
}
Teretni(int m, VRSTAROBE v, char* n)
{
    masarobekg = m;
    vrstarobe = v;
    nazivrobe = n;
}
Teretni(const Teretni &t)
{
    masarobekg = t.masarobekg;
    vrstarobe = t.vrstarobe;
    nazivrobe = t.nazivrobe;
}
~Teretni(){};
int GetMasaRobekg() const {return masarobekg;}
VRSTAROBE GetVrstaRobe() const {return vrstarobe;}
char* GetNazivRobe() const {return nazivrobe;}
void SetMasaRobe(int m) {masarobekg = m;}
void SetVrstaRobe(VRSTAROBE v) {vrstarobe = v;}
void SetNazivRobe(char* n){nazivrobe = n;}
};

#endif // TERETNI_H_INCLUDED
