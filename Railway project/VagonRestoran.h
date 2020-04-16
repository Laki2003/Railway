#ifndef VAGONRESTORAN_H_INCLUDED
#define VAGONRESTORAN_H_INCLUDED

#include "VAGON.h"
enum MENI{CAFFE, ITALIJANSKI, FRANCUSKI, NEMACKI};
class Restoran : public Vagon{
private:
    MENI meni;
    bool sank;
    bool konobar;
public:
    Restoran(): Vagon()
    {
        meni = CAFFE;
        sank = true;
        konobar = false;
    }
    Restoran(MENI m, bool s, bool k, int sifra, int r):Vagon(sifra, r)
    {
        meni = m;
        sank = s;
        konobar = k;
    }
    Restoran(const Restoran &r):Vagon(r.sifravagona, r.razred)
    {
        meni = r.meni;
        sank = r.sank;
        konobar = r.konobar;
    }
    char* GetTip() const {
    switch(meni)
    {
    case CAFFE:
        return "Caffee";
    case ITALIJANSKI:
        return "Italijanski";
        case FRANCUSKI:
        return "Francuski";
        case NEMACKI:
            return "Nemacki";
    }
    }
    bool GetOprema() const {return sank;}
    bool GetKonobar() const {return konobar;}
    void SetTip(int m)  {
    switch(m)
    {
    case 1:
        meni = CAFFE;
        break;
    case 2:
        meni = ITALIJANSKI;
        break;
    case 3:
        meni = FRANCUSKI;
        break;
    case 4:
        meni = NEMACKI;
        break;
    }
    }
    void SetOprema(bool s) {sank =s;}
    void SetKonobar(bool k){konobar = k;}
};

#endif // VAGONRESTORAN_H_INCLUDED
