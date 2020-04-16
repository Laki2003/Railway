#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include "FIP CARDS.h"
#include "ruta.h"
#include "RezervacijeiKarte.h"
enum TipKarte {RETURN, ONEWAY};

class Ticket:public RezervacijeiKarte
{
protected:
    TipKarte tip;
    datum kretanja;
    datum povratka;
    Ruta* r;
    char* sifravoza;

public:
Ticket(): r(new Ruta()), RezervacijeiKarte(){
tip = ONEWAY;
kretanja.dan = 1;
kretanja.mesec = 1;
kretanja.godina = 2020;
if(tip==RETURN)
{
    povratka.dan = 2;
    povratka.mesec = 1;
    povratka.godina = 2020;
}
else{
    povratka.dan = 0;
    povratka.mesec = 0;
    povratka.godina = 0;
}
sifravoza = "100";
cena = 50;
}
Ticket(char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2,
       char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u, int start, int endp, datum k, datum p, TipKarte t, int c, int s):
           r(new Ruta(g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2, r,time,u, start, endp)),tip(t),kretanja(k), RezervacijeiKarte(s,c)
       {
           if(tip==RETURN)
           {
               povratka = p;

           }
           else{
            povratka.dan=0;
            povratka.mesec = 0;
            povratka.godina = 0;
           }
       }
       Ticket(const Ticket& k): r(new Ruta(*(k.r))), tip(k.tip), kretanja(k.kretanja), povratka(k.povratka), sifravoza(k.sifravoza),RezervacijeiKarte(k.sifra, k.cena){}
    TipKarte GetTipKarte() const
    {
        return tip;
    }
    datum GetIzdavanja() const
    {
        return kretanja;
    }
    datum GetPovratka() const
    {
        return povratka;
    }
    Ruta* GetR() const
    {
        return r;
    }
    char* GetSifraVoza() const
    {
        return sifravoza;
    }

    void SetTipKarte(TipKarte t)
    {
        tip = t;
    }
    void SetIzdavanja(datum k )
    {
        kretanja = k;
    }
    void SetPovratka(datum p)
    {
        povratka = p;
    }
    void SetR(const Ruta& ru)
    {
delete r;
    r = new Ruta(ru);
    }
    void SetSifraVoza(char* s)
    {
        sifravoza = s;
    }

};

#endif // TICKET_H_INCLUDED
