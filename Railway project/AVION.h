#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED
enum SEDISTE {KOZNO, STOF};
class Avion{
private:
    int brojsedista;
    SEDISTE sediste;
    bool sto;
public:
    Avion()
    {
        brojsedista = 0;
        sediste = STOF;
        sto = true;
    }
    Avion(int broj, SEDISTE s, bool t)
    {
        brojsedista = broj;
        sediste = s;
        sto= t;
    }
    Avion(const Avion &a)
    {
        brojsedista = a.brojsedista;
        sediste = a.sediste;
        sto = a.sto;
    }
    SEDISTE GetSediste() const{return sediste;}

};

#endif // AVION_H_INCLUDED
