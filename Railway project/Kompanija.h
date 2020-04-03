#ifndef KOMPANIJA_H_INCLUDED
#define KOMPANIJA_H_INCLUDED

class Kompanija
{
private:
    int osnovana;
    char* ZemljaPorekla;
    int prihod;
    public:
    Kompanija()
    {
        osnovana = 1980;
        ZemljaPorekla = "Japan";
        prihod= 500000000;
    }
    Kompanija(int o, char* Z, int p)
    {
        osnovana = o;
        ZemljaPorekla = Z;
        prihod = p;
    }
    Kompanija(const Kompanija &k)
    {
        osnovana = k.osnovana;
        ZemljaPorekla = k.ZemljaPorekla;
        prihod = k.prihod;
    }
    int GetOsnovana() const {return osnovana;}
    char* GetZemljaPorekla() const {return ZemljaPorekla;}
    int GetPrihod() const {return prihod;}
    void SetOsnovana(int o){osnovana = o;}
    void SetZemljaPorekla(char* Z){ZemljaPorekla = Z;}
    void SetPrihod(int p){prihod = p;}
};

#endif // KOMPANIJA_H_INCLUDED
