#ifndef STANICA_H_INCLUDED
#define STANICA_H_INCLUDED
#include <vector>
#include "PERON.h"
#include <string.h>
class Stanica{

private:
char* Grad;
char* Zemlja;
bool glavnastanica;
int brojperona;
std::vector<Peron> p;
char NazivStanice[30];

public:

Stanica()
{
    Grad = "Novi Sad";
   Zemlja = "Srbija";
    glavnastanica = false;
    brojperona = 5;
    for(int i=0;i<brojperona;++i)
    {
        Peron a;
        p.push_back(a);
    }
    printf("Unesite naziv stanice: ");
  gets(NazivStanice);
}
Stanica(char* g, char* z, bool glavna, int broj, char* n)
{
    Grad = g;
    Zemlja = z;
    glavnastanica = glavna;
    brojperona = broj;
    for(int i=0;i<brojperona;++i)
    {
        int s;
        printf("Unesite da li je peron slobodan(1.DA, 2.NE)\n");
        scanf("%i", &s);
        if(s<1 || s>2)
        {
            while(s<1 || s>2)
            {
                  printf("Unesite da li je peron slobodan(1.DA, 2.NE)\n");
                  scanf("%i", &s);
            }
        }
        if(s==1)
     {
         Peron a(true, i+1);
     p.push_back(a);
     }
        else
         {
            Peron a(false, i+1);
        p.push_back(a);
    }
    }
    int i;
for(i=0;i<strlen(n);++i)
{
    NazivStanice[i]=n[i];
}
NazivStanice[i] = '\0';
}
Stanica(const Stanica& s)
{
    Grad = s.Grad;
    Zemlja = s.Zemlja;
    brojperona = s.brojperona;
    for(int i=0;i<brojperona;++i)
    {
        p.push_back(s.p[i]);
    }

}
char* getGrad() const {return Grad;}
char* GetZemlja() const {return Zemlja;}
bool GetGlavnaStanica() const {return glavnastanica;}
int GetBrojPerona() const {return brojperona;}
Peron GetPeron(int brojperona) const {return p[brojperona-1];}
char* GetNazivStanice()  {return NazivStanice;}
void SetGrad(char* s){Grad = s;}
void SetZemlja(char* z){Zemlja = z;}
void SetGlavnaStanica(bool s){glavnastanica = s;}
void SetBrojPerona(int broj){for(int i=brojperona-1;i>=broj;++i)
{
    p.pop_back();
}
brojperona = broj;
}
void SetNazivStanice(){
char s[30];
    printf("Unesite novi naziv stanice!\n");
gets(s);
    int i;
    for(i=0;i<strlen(s);++i){
    NazivStanice[i] = s[i];}
    NazivStanice[i]='\0';
}
};

#endif // STANICA_H_INCLUDED
