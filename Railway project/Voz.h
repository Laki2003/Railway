#ifndef VOZ_H_INCLUDED
#define VOZ_H_INCLUDED
#include "Kompanija.h"
#include "LOKOMOTIVA.h"
#include "VAGON.h"
#include <vector>


enum VRSTAVOZA{PUTNICKI, TERETNI, METRO};
template<class T>
struct Vagoni{
Vagon<T> v;
Vagoni* next;
 void addVagon(Vagon<T> v)
{
if(this==NULL)
{
    this->v = v;
this->next = NULL;
}
else{

    while(this->next!=NULL)
    {
        this= this->next;
    }
    Vagoni* newVagon = new Vagoni;
    newVagon->v = v;
    newVagon->next = NULL;
    this->next = newVagon;
}
}
};


class Voz
{
private:
    std::string sifravoza;
    Kompanija k;
    Lokomotiva l;
    int brojvagona;
    VRSTAVOZA voz;
Vagoni vagoni;
public:
    Voz():sifravoza("101"), k(), l(), brojvagona(10), voz(METRO), vagoni(NULL) {
    for(int i=0;i<brojvagona;++i)
    {
        Vagon<Metro> m;
        vagoni.addVagon(m);

    }
    }
    Vagon<T> GetVagoni(int brojvagona) const {return vagoni[brojvagona-1];}
};

#endif // VOZ_H_INCLUDED
