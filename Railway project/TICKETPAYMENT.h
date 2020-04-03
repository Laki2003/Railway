#ifndef TICKETPAYMENT_H_INCLUDED
#define TICKETPAYMENT_H_INCLUDED
#include "OSOBA.h"
template <class T, class U>
class TicketPayment
{
private:
    int cena;
    int brojkarata;
    int ukupnacena;
    Osoba osoba;
    T* karta;
    Placanje<U>* p;
public:
    TicketPayment(): cena(10), brojkarata(1), ukupnacena(10), osoba(new Osoba()), karta(new T()), p(new Placanje<U>()) {}
    TicketPayment(int c, int b, int u, const Osoba &o, int broj, int p, datum izdavanje, char* d,Kes k, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(broj,p,izdavanje,d)), p(new Placanje<U>(k, v)) {}
    TicketPayment(int c, int b, int u, const Osoba& o, int broj, int p, datum izdavanje, char* d, KARTICA t, char* h, datum d, int s, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(broj,p,izdavanje,d)), p(new Placanje<U>(t, h, d, s, v)) {}
    TicketPayment(int c, int b, int u, const Osoba& o, int broj, int p, datum izdavanje, char* d,const U &t, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(broj,p,izdavanje,d)), p(new Placanje<U>(t, v)) {}
    TicketPayment(int c, int b, int u, const Osoba& o, datum d, bool evropa, Kes k, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(d, evropa)), p(new Placanje<U>(k, v)) {}
    TicketPayment(int c, int b, int u, const Osoba& o, datum d, bool evropa,KARTICA t, char* m, datum n, int s, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(d, evropa)), p(new Placanje<U>(t,m,n,s,v)) {}
    TicketPayment(int c, int b, int u, const Osoba& o, datum d, bool evropa, const U &t, VALUTA v):
     cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(d, evropa)), p(new Placanje<U>(t, v)){}
TicketPayment(int c, int b, int u, const Osoba& o, TipKarte t, datum k, const Ruta& ru, const Voz& v, Kes k, VALUTA v):
cena(c), brojkarata(b), ukupnacena(u), osoba(o),karta(new T(t,k,ru,v)), p(new Placanje<U>(k,v)){}
TicketPayment(int c, int b, int u, const Osoba& o,  TipKarte t, datum k, const Ruta& ru, const Voz& v, KARTICA te, char* dd, datum d, int s, VALUTA va):
    cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(new T(t,k,ru,v)),  p(new Placanje<U>(te, dd, d, s, va)){}

};


#endif // TICKETPAYMENT_H_INCLUDED
