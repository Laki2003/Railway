#ifndef RUTA_H_INCLUDED
#define RUTA_H_INCLUDED
#include "STANICA.h"
enum RUTA {GRADSKI, REGIONALNI, INTERNACIONALNI};
struct Vreme
{
    int sati;
    int minuti;
};
class Ruta
{
private:
    Stanica* from;
    Stanica* to;
    RUTA ruta;
    Vreme v;
    unsigned int ucestalostmin;
protected:
    void provera()
    {
         if(ruta==GRADSKI)
    {
        if(ucestalostmin>10)
        {
            while(ucestalostmin>10)
            {
                printf("Ucestalost mora da bude manja od 10 min!\n");
                scanf("%i", &ucestalostmin);
            }
        }
        if(to->GetZemlja()!=from->GetZemlja())
        {
            printf("Posto ste postavili da je ovo gradska ruta izmenili smo zemlju da bude  ista kso sa polaska!");
            to->SetZemlja(from->GetZemlja());
        }
        if(to->getGrad()!=from->getGrad())
        {
            printf("Posto ste postavili da je ovo gradska ruta izmenili smo grad da bude  isti kao sa polaska!");
            to->SetGrad(from->getGrad());
        }

    }
        if(ruta==REGIONALNI)
        {
            if(ucestalostmin>35)
            {
                while(ucestalostmin>35)
                {
                    printf("Ucestalost mora da bude manja od 35 min!\n");
                scanf("%i", &ucestalostmin);
                }
            }
              if(to->GetZemlja()!=from->GetZemlja())
        {
            printf("Posto ste postavili da je ovo regionalna ruta izmenili smo zemlju da bude  ista kso sa polaska!");
            to->SetZemlja(from->GetZemlja());
        }
        if(to->getGrad()==from->getGrad())
        {
            while(to->getGrad()==from->getGrad()){
            printf("Posto ste postavili da je ovo regionalna ruta morate uneti drugi grad!");
            char* s;
            gets(s);
            to->SetGrad(s);
            }
        }

        }
        if(ruta==INTERNACIONALNI)
        {
              if(ucestalostmin<30)
            {
                while(ucestalostmin<30)
                {
                    printf("Ucestalost mora da bude veca od 30 min!\n");
                scanf("%i", &ucestalostmin);
                }
            }
              if(to->GetZemlja()==from->GetZemlja())
        {
            while(to->GetZemlja() == from->GetZemlja()){
            printf("Posto ste postavili da je ovo internacionalna ruta morate uneti drugu zemlju!");
            char* s;
            gets(s);
            to->SetZemlja(s);
            }
        }
        if(to->getGrad()==from->getGrad())
        {
            while(to->getGrad()==from->getGrad()){
            printf("Posto ste postavili da je ovo internacionalna ruta morate uneti drugi grad!");
            char* s;
            gets(s);
            to->SetGrad(s);
            }
        }
        }
    }
    public:
    Ruta():from(new Stanica()), to(new Stanica()), ruta(GRADSKI),v({5,0}), ucestalostmin(3){}
    Ruta(char* g1, char* z1, bool glavna1, int broj1, char* n1, char* g2, char* z2, bool glavna2, int broj2, char* n2, RUTA r, Vreme time, int u):
        from(new Stanica(g1,z1,glavna1,broj1,n1)), to(new Stanica(g2,z2,glavna2,broj2,n2)), ruta(r), v(time),ucestalostmin(u) {
  provera();
        }
    Ruta(const Stanica &s1, const Stanica &s2, RUTA r, Vreme time, int u): from(new Stanica(s1)), to(new Stanica(s2)), ruta(r), v(time), ucestalostmin(u) {
    provera();
    }
   Ruta(const Ruta& r):from(new Stanica(*(r.from))), to(new Stanica(*(r.to))), ruta(r.ruta), v(r.v), ucestalostmin(r.ucestalostmin) {

    }
Stanica* getFrom() const {return from;}
Stanica* getTo() const {return to;}
RUTA getRuta() const {return ruta;}
Vreme getV() const{return v;}
int getUcestalost() const {return ucestalostmin;}
void SetRuta(RUTA r){ruta = r;}
void SetVreme(Vreme time){v = time;}
void SetUcestalost(int u){ucestalostmin = u;}
};

#endif // RUTA_H_INCLUDED
