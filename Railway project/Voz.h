#ifndef VOZ_H_INCLUDED
#define VOZ_H_INCLUDED
#include "Kompanija.h"
#include "LOKOMOTIVA.h"
#include "VAGON.h"
#include <vector>
enum VRSTAVOZA{PUTNICKI, TERETNI, METRO};
template<class T>
class Voz
{
private:
    std::string sifravoza;
    Kompanija k;
    Lokomotiva l;
    int brojvagona;
    VRSTAVOZA voz;
    std::vector<Vagon<T>> vagoni;
public:
    Voz():sifravoza("101"), k(), l(), brojvagona(10) {
    for(int i=0;i<brojvagona;++i)
    {
        vagoni.push_back(Vagon<T>());

    }
    }
};

#endif // VOZ_H_INCLUDED
