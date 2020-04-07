#ifndef REZERVACIJA_H_INCLUDED
#define REZERVACIJA_H_INCLUDED
#include "ruta.h"

class Rezervacija{
private:
int cena;
Ruta* r;
public:
    Rezervacija():cena(10), r(new Ruta()){}
    Rezervacija(int c, char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2, char* z2, bool glavna2, int broj2, char* n2, RUTA r, Vreme time, int u):
        cena(c), r(new Ruta(g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u)){}
Rezervacija(int c,const Rezervacija&r):cena(c), r(new Ruta(*r.r)){}

int GetCena()const{return cena;}
Ruta* GetRuta() const {return r;}
void SetCena(int c){cena=c;}

 };

#endif // REZERVACIJA_H_INCLUDED
