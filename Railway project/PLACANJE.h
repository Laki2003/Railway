#ifndef PLACANJE_H_INCLUDED
#define PLACANJE_H_INCLUDED
#include "KARTICE.h"

enum VALUTA {EUR, RSD, HRK, USD, GBP};
enum Kes{KES};
template<class T>
class Placanje{
private:
T* nacinplacanja;

VALUTA valuta;
public:
    Placanje(): nacinplacanja(new T()), valuta(EUR){}
    Placanje(Kes k, VALUTA v): nacinplacanja(new T(k)), valuta(v){}
    Placanje(KARTICA t, char* b, datum d, int s, VALUTA v): nacinplacanja(new T(t, b, d, s)), valuta(v){}
    Placanje(const T &t, VALUTA v): nacinplacanja(new T(t)), valuta(v){}
    Placanje(Placanje &p): nacinplacanja(new T(*(p.nacinplacanja))), valuta(p.valuta){}
    T* GetNacinplacanja() const { return nacinplacanja;}
    VALUTA GetValuta() const {return valuta;}
    void SetNacinPLacanja(const T &n){nacinplacanja = n;}
        void SetValuta(VALUTA v){valuta = v;}
};

#endif // PLACANJE_H_INCLUDED
