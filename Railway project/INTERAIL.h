#ifndef INTERAIL_H_INCLUDED
#define INTERAIL_H_INCLUDED
#include "FIP CARDS.h"

#include <list>
#include <vector>
#include "RezervacijeiKarte.h"
typedef Datum datum;

class Interail: public RezervacijeiKarte
{
private:

    datum DatumIzdavanja;
    bool celaEvropa;

   std::vector<std::pair<char[50],std::vector<Kompanija*> > > drzave;

public:
    Interail(): RezervacijeiKarte()
    {
        celaEvropa = true;
        DatumIzdavanja.dan = 1;
        DatumIzdavanja.mesec = 1;
        DatumIzdavanja.mesec = 2020;
        cena = 50;

    }
    Interail(datum d, bool evropa, int c, int s):RezervacijeiKarte(s, c)
    {
        if(evropa==true)
        {
            celaEvropa = 1;
        }
        else{
            celaEvropa = 0;
            int i=3;
            while(i!=2)
            {
                printf("Da li zelite da unesete novu drzavu?1.Da 2.NE");
                scanf("%i", &i);
                if(i==2)
                    break;
                if(i==1){
                    char r[50];
                    printf("Ime drzave: ");
                    scanf("%s", r);
                    int j=3;
                std::vector<Kompanija*> help;
                    while(j!=2)
                    {
                        printf("Da li zelite da unesete kompaniju?: 1.DA 2.NE");
                        scanf("%i", &j);
                        if(j==2)
                            break;
                        if(j==1){
                            printf("Unesite ime kompanije:");
                            char n[50];
                       scanf("%s" ,n);
                            printf("Unesite godinu osnivanja kompanije: ");
                            int v;
                            scanf("%i", &v);
                            printf("Unesite zemlju porekla: ");
                            char s[50];
                            scanf("%s", s);
                            help.push_back(new Kompanija(v, s, n));
                        }
                    }
                   std::pair<char[50],vector<Kompanija*> > p;
                   int h; for(h=0;h<strlen(r);++h){p.first[h] = r[h];}
                   r[h]='\0';
                   p.second = help;
                   drzave.push_back(p);

                }
            }

        }
        DatumIzdavanja.dan = d.dan;
        DatumIzdavanja.mesec = d.mesec;
        DatumIzdavanja.godina = d.godina;

    }
    Interail(const Interail &rail):RezervacijeiKarte(rail.sifra, rail.cena)
    {
        if(rail.celaEvropa == true)
        {

celaEvropa = rail.celaEvropa;
        }
        else{
            celaEvropa = false;
for(int i=0;i<rail.drzave.size();++i)
     {
      pair<char[50], std::vector<Kompanija*> > p;
    int h; for(h=0;h<strlen(rail.drzave[i].first);++h){p.first[h] = rail.drzave[i].first[h];}
    p.first[h] = '\0';
    std::vector<Kompanija*> help;
             for(int j=0;j<rail.drzave[i].second.size();++j)
         {
             help.push_back(new Kompanija(*(rail.drzave[i].second[j])));
         }
         p.second = help;
         drzave.push_back(p);
     }

        }
    }
datum GetDatumIzdavanja() const {return DatumIzdavanja;}
bool GetCelaEvropa() const {return celaEvropa;}

 void SetDatumIzdavanja(datum d){DatumIzdavanja = d;}
 void SetCelaEvropa(bool b){celaEvropa = b;}
 void printLista()
 {
     for(int i=0;i<drzave.size();++i)
     {
         printf("%s\n", drzave[i].first);
         for(int j=0;j<drzave[i].second.size();++j)
         {
             printf("%s\n", drzave[i].second[j]->GetNaziv());
         }
     }
 }


};

#endif // INTERAIL_H_INCLUDED
