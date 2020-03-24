#ifndef INTERAIL_H_INCLUDED
#define INTERAIL_H_INCLUDED
#include "FIP CARDS.h"
typedef Datum datum;

class Interail
{
private:
    char** drzave;
    int brojdrzava;
    datum DatumIzdavanja;
    bool celaEvropa;
public:
    Interail()
    {
        celaEvropa = true;
        DatumIzdavanja.dan = 1;
        DatumIzdavanja.mesec = 1;
        DatumIzdavanja.mesec = 2020;
    }
    Interail(datum d, bool evropa)
    {
        if(evropa==true)
        {
            celaEvropa = 1;
        }
        else{
            celaEvropa = 0;
            printf("Unesite broj zemalja za interail:");
             scanf("%i", &brojdrzava);
               (*drzave) = (char*)malloc(sizeof(char*)*brojdrzava);

             for(int i=0;i<brojdrzava;++i)
             {
                                scanf("%s", drzave[i]);
             }
        }
        DatumIzdavanja.dan = d.dan;
        DatumIzdavanja.mesec = d.mesec;
        DatumIzdavanja.godina = d.godina;
    }
    Interail(const Interail &rail)
    {
        if(rail.celaEvropa == true)
        {

celaEvropa = rail.celaEvropa;
        }
        else{
            celaEvropa = false;
            brojdrzava = rail.brojdrzava;
            drzave=(char**)malloc(sizeof(char*)*brojdrzava);
            for(int i=0;i<brojdrzava;++i)
            {
                drzave[i]= rail.drzave[i];
            }
            for(int i=0;i<rail.brojdrzava;++i)
            {
               drzave[i]=rail.drzave[i];
            }
        }
        DatumIzdavanja = rail.DatumIzdavanja;
    }
datum GetDatumIzdavanja() const {return DatumIzdavanja;}
int GetBrojDrzava () const {return brojdrzava;}
bool GetCelaEvropa() const {return celaEvropa;}
char** GetDrzave() const {return drzave;}
 void SetDrzave(char** s){drzave = s;}
 void SetBrojDrzava(int b) {brojdrzava = b;}
 void SetDatumIzdavanja(datum d){DatumIzdavanja = d;}
 void SetCelaEvropa(bool b){celaEvropa = b;}
};

#endif // INTERAIL_H_INCLUDED
