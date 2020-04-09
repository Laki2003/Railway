#ifndef VAGON_H_INCLUDED
#define VAGON_H_INCLUDED
#include <typeinfo>


class Vagon {
protected:

int sifravagona;
int razred;

public:

virtual int GetBrojSedista(void) const{printf("Ovaj vagon nema ovu funkciju!");
return -1;}
virtual void SetBrojsedista(int){printf("Ovaj vagon nema ovu funkciju");}
virtual char* GetTip() const{
return "Ovaj vagon nema posebne vrste!";
};
virtual void SetTip(int){printf("Ovaj vagon nema posebne vrste!");}
virtual bool GetOprema()const {printf("Ovaj vagon nema posebnu opremu!");}
virtual void SetOprema(bool){printf("Ovaj vagon nema posebnu opremu!");}
virtual int GetBrojKupea()const {printf("Ovaj vagon nema kupee!");
return -1;}
virtual void SetBrojKupea(int){printf("Ovaj vagon nema kupe-e!");}
virtual bool GetPrilagodjenzaPosebnePotrebe()const{printf("Ovaj vagon nema tu mogucnost!");}
virtual void SetPrilagodjenzaPosebnePotrebe(bool){printf("Ovaj vagon nema tu mogucnost!");}
virtual bool GetKonobar()const{printf("Ovaj vagon nema konobara!");}
virtual void SetKonobar(bool){printf("Ovaj vagon nema konobara!");}
virtual int GetMasaRobe()const{printf("Ovaj vagon nema robu!");}
virtual void SetMasaRobe(int){printf("Ovaj vagon nema robu!");}
virtual char* GetNazivRobe(){printf("Ovaj vagon nema robu!");}
virtual void SetNazivRobe(char*){printf("Ovaj vagon nema robu!");}
Vagon()
{
    sifravagona = 100;
    razred = 1;
}
Vagon(int s, int r)
{
    sifravagona = s;
    razred = r;
}
Vagon(const Vagon &v)
{
    sifravagona = v.sifravagona;
    razred = v.razred;
}
int GetSifraVagona() const {return sifravagona;}
int GetRazred() const {return razred;}
void SetSifraVagona(int b){sifravagona = b;}
void SetRazred(int r){razred = r;}
};

#endif // VAGON_H_INCLUDED
