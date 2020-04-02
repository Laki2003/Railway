#ifndef PERON_H_INCLUDED
#define PERON_H_INCLUDED

class Peron{
private:
    bool slobodan;
    int sifraperona;
public:
    Peron(){
    slobodan = false;
    sifraperona = 0;
    }
    Peron(bool s, int sifra)
    {
        slobodan = s;
        sifraperona = sifra;
    }
    Peron(const Peron& p)
    {
        slobodan = p.slobodan;
        sifraperona = p.sifraperona;
    }
    bool GetSlobodan(){return slobodan;}
    int GetSifraPerona(){return sifraperona;}
    void SetSlobodan(bool s){slobodan = s;}
    void SetSifraVagona(int s){sifraperona = s;}
};
#endif // PERON_H_INCLUDED
