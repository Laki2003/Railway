#ifndef REZERVACIJA_H_INCLUDED
#define REZERVACIJA_H_INCLUDED
#include "PLACANJE.h"
template<class T>
class Rezervacija{
private:
int brojmesta;
int cena;
int ukupnacena;
Placanje <T>* p;
public:
    Rezervacija():brojmesta(1), cena(10), ukupnacena(10),p(new Placanje<T>()) {}
    Rezervacija(int broj, int c, Kes k, VALUTA v):brojmesta(broj), cena(c), ukupnacena(broj*c), p(new Placanje<T>(k, v)){}
    Rezervacija(int broj, int c, KARTICA t, char* b, datum d, int s, VALUTA v):brojmesta(broj), cena(c), ukupnacena(c*broj), p(new Placanje<T>(t,b,d,s,v)){}
    Rezervacija(int broj, int c, const T &t, VALUTA v):brojmesta(broj), cena(c), ukupnacena(broj*c), p(new Placanje<T>(t, v)){}
    Rezervacija(int broj, int c, Placanje<T> &pay):brojmesta(broj), cena(c), ukupnacena(broj*c), p(new Placanje<T>(pay)){}
    Rezervacija(Rezervacija &r): brojmesta(r.brojmesta), cena(r.cena), ukupnacena(r.brojmesta*r.cena), p(new Placanje<T>(*(r.p))){}

Placanje<T>* GetPlacanje()  {return p;}
int GetBrojMesta() const {return brojmesta;}
int GetCena() const {return cena;}
int GetUkupnaCena() const {return ukupnacena;}
void SetPlacanje(Placanje<T>* pay){p = pay;}
void SetBrojMesta(int broj){brojmesta = broj;}
void SetCena(int c){cena = c;}
void SetUkupnaCena(int d, int e){SetBrojMesta(d);
SetCena(e);
ukupnacena = brojmesta*cena;
}
 };

#endif // REZERVACIJA_H_INCLUDED
