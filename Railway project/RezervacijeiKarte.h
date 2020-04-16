#ifndef REZERVACIJEIKARTE_H_INCLUDED
#define REZERVACIJEIKARTE_H_INCLUDED

class RezervacijeiKarte{
protected:
    int sifra;
    int cena;
public:
    RezervacijeiKarte()
    {
        sifra=100;
        cena = 50;
    }
    RezervacijeiKarte(int s, int c){sifra = s; cena = c;}
    RezervacijeiKarte(const RezervacijeiKarte& s){sifra = s.sifra; cena = s.cena;};
      int GetCena() const{return cena;}
   void SetCena(int c){cena = c;}
   int GetSifra() const {return sifra;}
   void SetSifra(int s) {sifra =s;}

};


#endif // REZERVACIJEIKARTE_H_INCLUDED
