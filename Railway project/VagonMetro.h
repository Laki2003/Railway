#ifndef VAGONMETRO_H_INCLUDED
#define VAGONMETRO_H_INCLUDED


#include "VAGON.h"
class Metro: public Vagon{

int brojsedista;
bool GPSMap;
bool prilagodjenPosebnePotrebe;
public:
Metro():Vagon()
{
    brojsedista = 20;
    GPSMap = true;
    prilagodjenPosebnePotrebe = false;
}
Metro(int b, bool GSP, bool prilagodjen, int sifra, int r):Vagon(sifra, r)
{
    brojsedista = b;
    GPSMap = GSP;
    prilagodjenPosebnePotrebe = prilagodjen;
}
Metro(const Metro &m): Vagon(m.sifravagona, m.razred)
{
    brojsedista = m.brojsedista;
    GPSMap = m.GPSMap;
    prilagodjenPosebnePotrebe = m.prilagodjenPosebnePotrebe;
}
~Metro(){};
int GetBrojSedista() const {return brojsedista;}
bool GetOprema()  const {return GPSMap;}
bool GetPrilagodjenzaPosebnePotrebe() const {return prilagodjenPosebnePotrebe;}
void SetBrojsedista(int b) {brojsedista=b;}
void SetOprema(bool G) {GPSMap = G;}
void SetPrilagodjenzaPosebnePotrebe(bool p){prilagodjenPosebnePotrebe = p;}
};

#endif // VAGONMETRO_H_INCLUDED
