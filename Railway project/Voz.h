#ifndef VOZ_H_INCLUDED
#define VOZ_H_INCLUDED
#include "Kompanija.h"
#include "LOKOMOTIVA.h"
#include "ListaVagona.h"


enum VRSTAVOZA {PUTNICKI, TERETNI, METRO};
class Voz
{
private:
    char* sifravoza;
    Kompanija* k;
    Lokomotiva* l;
    int brojvagona;
    VRSTAVOZA voz;
Lista* vagoni;
protected:
   void unosVagona(int i, int b)
    {
        if(voz==PUTNICKI)
        {
            for( i=i; i<b; ++i)
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
                if(e==1)
                {
                    int broj, klasa;
                    TIP s;
                    bool t;
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


                    vagoni->addVagon(new Avion(broj, s, t, i, klasa));
                }
                else if(e==2)
                {
                    int klasa;
                    KUPE v;
                    int broj;
                    int brojsedista;
                    bool k;
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

                    vagoni->addVagon(new Kupe(v, broj, brojsedista, k, i, klasa));
                }
                else
                {
                    int klasa;
                    MENI m;
                    bool s;
                    bool k;
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

                    vagoni->addVagon( new Restoran( m, s, k, i, klasa));

                }
            }
        }
        if(voz == TERETNI)
        {
            for(int i=0; i<brojvagona; ++i)
            {
                int m;
                VRSTAROBE v;
                char n[30];
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

                vagoni->addVagon(new Teretni(m, v, n, i, 0));
            }
        }
        if (voz==METRO)
        {
            for(int i=0; i<brojvagona; ++i)
            {
                int b;
                bool GPS, prilagodjen;
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
            vagoni->addVagon(new Metro(b, GPS, prilagodjen, i, 0));
            }
        }
    }
public:



    Voz():sifravoza("101"), k(new Kompanija()), l(new Lokomotiva()), brojvagona(10),voz(METRO), vagoni(new Lista())
    {
        for(int i=0; i<brojvagona; ++i)
        {
       vagoni->addVagon(new Metro());

        }
    }
    Voz(char* s, int o, char* Z, char* n, int b, int g,int q, char* m, TOCKOVI t, MOTOR r, int w, VRSTAVOZA type): sifravoza(s), k(new Kompanija(o, Z, n)), l(new Lokomotiva(b,g,q,m,t,r)), brojvagona(w),voz(type), vagoni(new Lista())
    {
        unosVagona(0, brojvagona);

    }
    Lista* GetVagoni()
    {
return vagoni;
    }
    Voz(Voz& a): sifravoza(a.sifravoza), k(new Kompanija(*(a.k))), l(new Lokomotiva(*(a.l))), brojvagona(a.brojvagona), voz(a.voz), vagoni(new Lista()){

for(int i=1;i<=brojvagona;++i)
{


    if(voz == TERETNI){
   /* Teretni* v;
    v = (Teretni*)((a.GetVagoni()->NadjiVagon(i)));
Vagon *t = new Teretni(*(v));
*/
vagoni->addVagon(new Teretni(*(Teretni*)(a.GetVagoni()->NadjiVagon(i))));
  //   delete (v);
    // delete (t);
    }
   else if(voz == METRO){
   /* Metro* v;
    v =(Metro*)((a.GetVagoni()->NadjiVagon(i)));
   Vagon* m = new Metro(*(v));
*/
   vagoni->addVagon(new Metro(*(Metro*)(a.GetVagoni()->NadjiVagon(i))));
//   delete (v);
  // delete (m);
   }
   else
   {
       if((a.GetVagoni()->NadjiVagon(i)->GetTip())=="Stof" || (a.GetVagoni()->NadjiVagon(i)->GetTip())=="Kozno"){
/*Avion* v;
v = (Avion*)((a.GetVagoni()->NadjiVagon(i)));
    Vagon* a = new Avion(*(v));
*/
       vagoni->addVagon(new Avion(*(Avion*)(a.GetVagoni()->NadjiVagon(i))));
       //delete (a);
       //delete (v);
       }
    else if((a.GetVagoni()->NadjiVagon(i)->GetTip())=="Kuset" || (a.GetVagoni()->NadjiVagon(i)->GetTip())=="Spavaca kola"){
   /*  Kupe* v;
     v = (Kupe*)((a.GetVagoni()->NadjiVagon(i)));
     Vagon* k = new Kupe(*(v));
*/
            vagoni->addVagon(new Kupe(*(Kupe*)(a.GetVagoni()->NadjiVagon(i))));
  //          delete (k);
    //delete (v);
    }
    else{
/*Restoran* v;
v = (Restoran*)((a.GetVagoni()->NadjiVagon(i)));
        Vagon* r = new Restoran(*(v));
*/
        vagoni->addVagon(new Restoran(*(Restoran*)(a.GetVagoni()->NadjiVagon(i))));
  //      delete (r);
    //      delete (v);
           }

   }
}
}



    char* GetSifraVoza() const
    {
        return sifravoza;
    }
    int GetBrojVagona() const {return brojvagona;}
    Kompanija* GetKompanija() const {return k;}
    Lokomotiva* GetLokomotiva() const {return l;}
    VRSTAVOZA GetVrsta() const {return voz;}
    void SetVagoni(const Lista e){delete (vagoni);
    vagoni = new Lista(e);}
    void SetSifraVoza(char* s) {sifravoza = s;}
    void SetKompanija(Kompanija co){delete k;
    k = new Kompanija(co);}
    void SetLokomotiva(Lokomotiva lo){delete l;
    l = new Lokomotiva(lo);}
    void SetVrstaVoza(VRSTAVOZA v){voz = v;}
    void SetBrojVagona(int b)
    {
        if(brojvagona<b)
        {

           unosVagona(brojvagona, b);

        }
        if(brojvagona>b)
        {
            for(int i=0;i<brojvagona-b;++i)
            {
                vagoni->deleteVagon();
            }
        }
        brojvagona = b;
    }

};

#endif // VOZ_H_INCLUDED
