#ifndef VOZ_H_INCLUDED
#define VOZ_H_INCLUDED
#include "Kompanija.h"
#include "LOKOMOTIVA.h"
#include "ListaVagona.h"
#include <vector>


enum VRSTAVOZA{PUTNICKI, TERETNI, METRO};
class Voz
{
private:
   char* sifravoza;
    Kompanija* k;
    Lokomotiva* l;
    int brojvagona;
    VRSTAVOZA voz;
Lista vagoni;
protected:
    void unosVagona()
    {
        if(voz==PUTNICKI){
    for(int i=0;i<brojvagona;++i)
    {
     printf("Izaberite vrstu vagona: 1. AVION, 2. KUPE, 3. RESTORAN\n");
     int e;
     scanf("%i", &e);
     if(e!=1 && e!=2 && e!=3)
     {
         while(e!=1 && e!=2 && e!=3)
         {
             scanf("%i", &e);
         }
     }
    if(e==1){
        int broj, klasa; SEDISTE s; bool t;
        printf("Unesite broj sedista u vagonu: ");
        scanf("%i", &broj);
        int num;
        printf("Unesite vrstu sedista u vagonu: 1. KOZNO, 2. STOF\n");
        scanf("%d", &num);
        if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            s = KOZNO;
        else
            s=STOF;
        printf("Da li kod sedista postoje preklopni stolovi?(1.DA, 2.NE)\n");
        scanf("%d", &num);

         if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            t = true;
        else
            t=false;
            printf("Unesite razred: ");
            scanf("%i", &klasa);

             Vagon* a = new Vagon(i, klasa, broj, s, t);
vagoni.addVagon(a);
    }
     else if(e==2){
         int klasa; KUPE v;int broj; int brojsedista; bool k;
         int num;
         printf("Unesite vrstu kupea: 1.KUSET, 2.SPAVACA KOLA\n");
          scanf("%d", &num);
        if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            v = KUSET;
        else
            v = SPAVACA_KOLA;
        printf("Unesite broj kupea: ");
        scanf("%i", &broj);
        printf("Unesite broj sedista u kupeu: ");
        scanf("%i", &brojsedista);
        printf("Da li kupe ima klimu?(1.DA, 2.NE)\n");
          scanf("%d", &num);

         if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            k = true;
        else
        k = false;
            printf("Unesite razred");
        scanf("%i", &klasa);
         Vagon* a = new Vagon(i, klasa, v, broj, brojsedista, k);
vagoni.addVagon(a);
     }
     else {
        int klasa;  MENI m; bool s; bool k;
        printf("Unesite vrstu menija u restoranu: 1.CAFFE, 2.ITALIJANSKI, 3.NEMACKI, 4.FRANCSUSKI\n");
        int num;
         scanf("%d", &num);
             if(num<1 && num>4)
        {
            while(num<1 && num>4)
                scanf("%d", &num);
        }
        switch(num)
        {
        case 1:
            m = CAFFE;
            break;
        case 2:
            m = ITALIJANSKI;
            break;
        case 3:
            m = NEMACKI;
            break;
        case 4:
            m = FRANCUSKI;
            break;
        }
              printf("Da li postoji sank?\n");
                  scanf("%d", &num);

         if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            s = true;
        else
        s = false;
        printf("Da li ima konobara?\n");
                       scanf("%d", &num);

         if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            k = true;
        else
        k = false;
          printf("Unesite razred: ");
          scanf("%i", &klasa);
          Vagon* a = new Vagon(i, klasa, m, s, k);
vagoni.addVagon(a);

             }
    }
    }
    if(voz == TERETNI)
    {
        for(int i=0;i<brojvagona;++i)
        {
             int m; VRSTAROBE v; char n[100];
             printf("Unesite masu robe: ");
             scanf("%i", &m);
             printf("Unesite vrstu robe: 1. Radioaktivno, 2. OSTALO\n");
             int num;
                       scanf("%d", &num);

         if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            v = RID;
        else
            v = OSTALO;
            printf("Unesite naziv robe: ");
           scanf("%s", n);
        Vagon* a = new Vagon(i,m, v, n);
vagoni.addVagon(a);
        }
    }
    if (voz==METRO)
    {
        for(int i=0;i<brojvagona;++i)
        {
int b; bool GPS, prilagodjen;
scanf("Unesite broj sedista: ");
scanf("%i", &b);
int num;
printf("Unesite da li metro ima GPS (1.DA 0.NE)\n");
   if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)

             GPS= true;
        else
        GPS = false;
        printf("Unesite da li je vagon prilagodjen za osobe sa invaliditetom (1.DA 0.NE)\n");
           scanf("%d", &num);
           if(num!=1 && num!=2)
        {
            while(num!=1 && num!=2)
                scanf("%d", &num);
        }
        if(num==1)
            prilagodjen = true;
        else
        prilagodjen = false;
         Vagon* a = new Vagon(i, b, GPS, prilagodjen);
vagoni.addVagon(a);
        }
    }
    }
public:



    Voz():sifravoza("101"), k(new Kompanija()), l(new Lokomotiva()), brojvagona(10),voz(METRO), vagoni(){
    for(int i=0;i<brojvagona;++i)
    {
        Vagon* a = new Vagon();
vagoni.addVagon(a);

    }
    }
    Voz(char* s, int o, char* Z, int p, int b, int g,int q, char* m, TOCKOVI t, MOTOR r, int w, VRSTAVOZA type): sifravoza(s), k(new Kompanija(o, Z, p)), l(new Kompanija(b,g,q,m,t,r)), brojvagona(w),voz(type), vagoni(){
    unosVagona();

    }
Lista GetVagoni() const {return vagoni;}
char* GetSifraVoza() const {return sifravoza;}
};

#endif // VOZ_H_INCLUDED
