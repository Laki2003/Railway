#ifndef TICKETPAYMENT_H_INCLUDED
#define TICKETPAYMENT_H_INCLUDED
#include "PLACANJE.h"
#include "OSOBA.h"
#include "FIP CARDS.h"
#include "INTERAIL.h"
#include "TICKET.h"
#include "REZERVACIJA.h"
template <class T, class U>
class TicketPayment : public Placanje<T>
{
private:
    int brojkarata;
    int ukupnacena;
    Osoba* osoba;
    U* karta;

public:
    void total()
    {
        ukupnacena=karta->GetCena()*brojkarata;
    }
    TicketPayment(): brojkarata(1), osoba(new Osoba()), Placanje<T>(), karta(new U())
    {
        total();
    }
    TicketPayment(int broj, int c, int s, RezervacijeiKarte ss, char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2, char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u, int start, int endp,
                  Kes k, VALUTA v, char* i, char* p, datum d, Pol pl):brojkarata(broj),Placanje<T>(k, v),
        karta(new U(c,s,ss,g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u,start,endp)), osoba(new Osoba(i,p,d,pl))
    {
        total();
    }
    TicketPayment(int broj, KARTICA t, char* b, datum d, int s, VALUTA v,
                  int c, int sss, RezervacijeiKarte ss, char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2, char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u, int start, int endp, char* i, char* p, datum dd, Pol pl):brojkarata(broj),Placanje<T>(t,b,d,s,v),
        karta(new U(c,sss,ss,g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u,start,endp)), osoba(new Osoba(i,p,dd,pl))
    {
        total();
    }

    TicketPayment(TicketPayment &r): brojkarata(r.brojmesta), Placanje<T>(r.p), karta(new U(*(r.karta))), osoba(r.osoba)
    {
        total();
        osoba->GetListaKarata()->DodajKartu(karta);
    }
    TicketPayment(int broj, int c,int b, int p, datum izdavanje, char* d, int s,
                  Kes k, VALUTA v, char* i, char* pp, datum dd, Pol pl):brojkarata(broj),Placanje<T>(k, v),
        karta(new U(c, b, p, izdavanje, d, s)), osoba(new Osoba(i,pp,dd,pl))
    {
        total();
        osoba->GetListaKarata()->DodajKartu(karta);
    }
    TicketPayment(int broj, int c,int b, int p, datum izdavanje, char* d,int ss, char* i, char* pp, datum dd, Pol pl, KARTICA t, char* bb, datum ddd, int s, VALUTA v):brojkarata(broj),Placanje<T>(t,bb,ddd,s,v),
        karta(new U(c,b,p,izdavanje, d,ss)), osoba(new Osoba(i,pp,dd,pl))
    {
        total();
        osoba->GetListaKarata()->DodajKartu(karta);
    }
    TicketPayment(int broj, datum d, bool evropa, int c, int s, char* i, char* p, datum dd, Pol pl, Kes k, VALUTA v):brojkarata(broj),Placanje<T>(k,v),
        karta(new U(d,evropa,c,s)), osoba(new Osoba(i,p,dd,pl))
    {
        total();
        osoba->GetListaKarata()->DodajKartu(karta);
    }
    TicketPayment(int broj, datum ddd, bool evropa, int c, int ss, char* i, char* p, datum dd, Pol pl,KARTICA t, char* b, datum d, int s, VALUTA v):
        brojkarata(broj), Placanje<T>(t,b,d,s,v), karta(new U(ddd,evropa,c,ss)), osoba(new Osoba(i,p,dd,pl))
    {
        total();
        osoba->GetListaKarata()->DodajKartu(karta);
    }
TicketPayment(char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2,
       char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u, int start, int endp, datum k, datum pp, TipKarte t, int c, int s, Kes kk, VALUTA v, char* i, char* p, datum d, Pol pl, int broj):
           karta(new U(g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u,start,endp,k,pp,t,c,s)), Placanje<T>(kk,v), osoba(new Osoba(i,p,d,pl)),
        brojkarata(broj){total();}

TicketPayment(char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2,
       char* z2, bool glavna2, int broj2, char* n2, tipRute r, Vreme time, int u,int start, int endp, datum k,
       datum p,  TipKarte t, int c, int ss, KARTICA tt, char* b, datum d, int s, VALUTA v, char* i, char* pp, datum dd, Pol pl, int broj):
           karta(new U(g1,z1,glavna1,broj1,n1,g2,z2,glavna2,broj2,n2,r,time,u,start,endp,k,p,t,c,ss)), Placanje<T>(tt,b,d,s,v), osoba(new Osoba(i,pp,dd,pl)),
        brojkarata(broj){
            total();
            osoba->GetListaKarata()->DodajKartu(karta);
            }
        TicketPayment(int broj,  Osoba o,const U k, KARTICA tt, char* b, datum d, int s, VALUTA v): brojkarata(broj), osoba(&o), karta(new U((k))), Placanje<T>(tt,b,d,s,v){total(); osoba->GetListaKarata()->DodajKartu(karta);}
        TicketPayment(int broj,  Osoba o,const U k, Kes kk, VALUTA v): brojkarata(broj), osoba(&o), karta(new U((k))), Placanje<T>(kk,v){total(); osoba->GetListaKarata()->DodajKartu(karta);}

        int GetBrojKarata() const {return brojkarata;}
        int GetUkupnaCena() const {return ukupnacena;}
        Osoba* GetOsoba() const {return osoba;}
        U* GetKarta() const {return karta;}
        void SetBrojKarata(int b) {brojkarata = b;
        SetUkupnaCena();}
        void SetUkupnaCena(){ukupnacena=karta->cena*brojkarata;}
        void SeOsoba( Osoba* r){delete osoba;
        osoba = new Osoba(*r);}
        void SetKarta(U* d){delete karta;
        karta = new U(*d);}
};


#endif // TICKETPAYMENT_H_INCLUDED
