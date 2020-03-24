#ifndef REZERVACIJA_H_INCLUDED
#define REZERVACIJA_H_INCLUDED
#include "PLACANJE.h"
template<class T>
class Rezervacija{
private:
int brojmesta;
int cena;
int ukupnacena;
Placanje <T>p;
public:
    Rezervacija():brojmesta(1), cena(10), ukupnacena(10),p() {}
Placanje<T> GetPlacanje() {return p;}

 };

#endif // REZERVACIJA_H_INCLUDED
