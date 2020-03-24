#ifndef RESTORAN_H_INCLUDED
#define RESTORAN_H_INCLUDED
enum MENI{CAFFE, ITALIJANSKI, FRANCUSKI, NEMACKI};
class Restoran{
private:
    MENI meni;
    bool sank;
    bool konobar;
public:
    Restoran()
    {
        meni = CAFFE;
        sank = true;
        konobar = false;
    }
    Restoran(MENI m, bool s, bool k)
    {
        meni = m;
        sank = s;
        konobar = k;
    }
    Restoran(const Restoran &r)
    {
        meni = r.meni;
        sank = r.sank;
        konobar = r.konobar;
    }
    MENI GetMeni() const {return meni;}
    bool GetSank() const {return sank;}
    bool GetKonbar() const {return konobar;}
    void SetMeni(MENI m)  {meni = m;}
    void SetSank(bool s) {sank =s;}
    void SetKonobar(bool k){konobar = k;}
};

#endif // RESTORAN_H_INCLUDED
