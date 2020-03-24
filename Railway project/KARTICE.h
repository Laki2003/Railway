#ifndef KARTICE_H_INCLUDED
#define KARTICE_H_INCLUDED
#include "FIP CARDS.h"
enum KARTICA{MASTERCARD, VISA, PAYPAL};
class Kartica{
    private:
KARTICA tip;
string brojkartice;
datum datumisteka;
int sigurnosnikod;
    public:
        Kartica()
        {
            tip = MASTERCARD;
            brojkartice ="0000000000000";
            datumisteka.dan = 1;
            datumisteka.mesec = 1;
            datumisteka.godina = 2021;
            sigurnosnikod = 152;
        }
        Kartica(KARTICA t, string b, datum d, int s)
        {
            tip = t;
            brojkartice = b;
datumisteka = d;
sigurnosnikod = s;
        }
        Kartica(const Kartica &k)
        {
            tip = k.tip;
            brojkartice = k.brojkartice;
            datumisteka = k.datumisteka;
            sigurnosnikod = k.sigurnosnikod;
        }
        KARTICA GetTip() const {return tip;}
        datum GetDatumIsteka() const {return datumisteka;}
        string GetBrojKartice() const {return brojkartice;}
        int GetSigurnosniKod() const {return sigurnosnikod;}
        void SetTip(KARTICA t) {tip = t;}
        void SetDatumIsteka(datum d){datumisteka = d;}
        void SetBrojKartice(string b){brojkartice = b;}
        void SetSigurnosniKod(int s){sigurnosnikod = s;}
};

#endif // KARTICE_H_INCLUDED
