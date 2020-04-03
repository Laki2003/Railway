#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include "FIP CARDS.h"
#include "ruta.h"
enum TipKarte {RETURN, ONEWAY};

class Ticket
{
private:
    TipKarte tip;
    datum kretanja;
    datum povratka;
    Ruta r;
    char* sifravoza;
public:
    Ticket(): tip(ONEWAY), kretanja(
    {
        1, 1, 2020
    }), povratka({0,0,0}), r(new Ruta()), sifravoza(101) {}
    Ticket(TipKarte t, datum k, const Ruta& ru, const Voz& v): tip(t),kretanje(k), r(ru), sifravoza(v.GetSifraVoza())
    {
        if(t==RETURN)
        {
            datum d;
            printf("Unesite dan povratka!");
            scanf("%d", &d.dan);
            printf("Unesite mesec povratka!");
            scanf("%d", &d.mesec);
            povratka.dan = d.dan;
            povratka.mesec = d.mesec;
            povratka.godina = k.godina;
        }
    }
    Ticket(const Ticket& t): tip(t.tip), tip(t.kretanja), tip(t.povratka), tip(t.r), tip(t.sifravoza) {}
    TipKarte GetTipKarte() const
    {
        return tip;
    }
    datum GetKretanja() const
    {
        return kretanja;
    }
    datum GetPovratka() const
    {
        return povratka;
    }
    Ruta GetR() const
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
    void SetKretanja(datum k )
    {
        kretanja = k;
    }
    void SetPovratka(datum p)
    {
        povratka = p;
    }
    void SetR(const Ruta& ru)
    {
        r = ru;
    }
    void SetSifraVoza(char* s)
    {
        sifravoza = s;
    }
};

#endif // TICKET_H_INCLUDED
