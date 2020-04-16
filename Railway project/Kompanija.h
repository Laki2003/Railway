#ifndef KOMPANIJA_H_INCLUDED
#define KOMPANIJA_H_INCLUDED
#include <string.h>
class Kompanija
{
private:
    int osnovana;
    char ZemljaPorekla[50];

    char naziv[50];
    public:
    Kompanija()
    {
        osnovana = 1980;
        char* i = "Japan";
        int j; for(j=0;j<strlen(i);++j){ZemljaPorekla[j]=i[j];}
        ZemljaPorekla[j]='\0';


     i="japanRailway";
     for(j=0;j<strlen(i);++j){naziv[j]=i[j];}
     naziv[j] = '\0';
    }
    Kompanija(int o, char* Z,  char* n)
    {
        osnovana = o;
       int i; for(i=0;i<strlen(Z);++i){ZemljaPorekla[i] = Z[i];}
       ZemljaPorekla[i]='\0';

        for(i=0;i<strlen(n);++i){naziv[i] = n[i];}
        naziv[i] = '\0';
    }
    Kompanija(const Kompanija &k)
    {
        osnovana = k.osnovana;
       int i; for(i=0;i<strlen(k.ZemljaPorekla);++i){ ZemljaPorekla[i] = k.ZemljaPorekla[i];}
       ZemljaPorekla[i]='\0';

        for(i=0;i<strlen(k.naziv);++i) {naziv[i] = k.naziv[i];}
        naziv[i] = '\0';
    }
    int GetOsnovana() const {return osnovana;}
    char* GetZemljaPorekla()  {return ZemljaPorekla;}

const    char* GetNaziv() const {return naziv;}
    void SetOsnovana(int o){osnovana = o;}
    void SetZemljaPorekla(char* Z){int i; for(i =0;i<strlen(Z);++i){ZemljaPorekla[i]=Z[i];}
    ZemljaPorekla[i]='\0';}

    void SetNaziv(char* p){int i; for(i=0;i<strlen(p);++i){naziv[i]=p[i];}
    naziv[i] = '\0';}
};

#endif // KOMPANIJA_H_INCLUDED
