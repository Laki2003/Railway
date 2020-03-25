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
    T karta;
    Placanje<U> p;
public:
    TicketPayment(): cena(10), brojkarata(1), ukupnacena(10), osoba(), karta(), p() {}
    TicketPayment(int c, int b, int u, Osoba o, int broj, int p, datum izdavanje, std::string d,Kes k, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(broj,p,izdavanje,d), p(k, v) {}
    TicketPayment(int c, int b, int u, Osoba o, int broj, int p, datum izdavanje, std::string d, KARTICA t, string h, datum d, int s, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(broj,p,izdavanje,d), p(t, h, d, s, v) {}
    TicketPayment(int c, int b, int u, Osoba o, int broj, int p, datum izdavanje, std::string d,const U &t, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(broj,p,izdavanje,d), p(t, v) {}
    TicketPayment(int c, int b, int u, Osoba o, datum d, bool evropa, Kes k, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(d, evropa), p(k, v) {}
    TicketPayment(int c, int b, int u, Osoba o, datum d, bool evropa,KARTICA t, string m, datum n, int s, VALUTA v):
        cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(d, evropa), p(t,m,n,s,v) {}
    TicketPayment(int c, int b, int u, Osoba o, datum d, bool evropa, const U &t, VALUTA v):
     cena(c), brojkarata(b), ukupnacena(u), osoba(o), karta(d, evropa), p(t, v){}


};


#endif // TICKETPAYMENT_H_INCLUDED
