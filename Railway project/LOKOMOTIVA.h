#ifndef LOKOMOTIVA_H_INCLUDED
#define LOKOMOTIVA_H_INCLUDED

enum TOCKOVI{CoCo,BB, C, BoBo};
enum MOTOR{DIZEL, ELEKTRICNI};
class Lokomotiva {
private:
int brzina;

        int godiste;
    int snaga;
    char* model;
    TOCKOVI tockovi;
    MOTOR motor;
public:
    Lokomotiva()
    {
        brzina = 100;
        model ="WAG-5B";
        godiste = 2000;
        int snaga = 28000;
        tockovi = CoCo;
        motor = ELEKTRICNI;
    }
    Lokomotiva(int b, int g,int s, char* m, TOCKOVI t, MOTOR r){
    godiste = g;
    brzina = b;
    snaga = s;
    model = m;
    tockovi = t;
    motor = r;
    }
    Lokomotiva(const Lokomotiva &l)
    {
        brzina = l.brzina;
        snaga = l.snaga;
        godiste = l.godiste;
        model = l.model;
        tockovi = l.tockovi;
        motor = l.motor;
    }
    int GetBrzina() const {return brzina;}
    int GetGodiste() const{return godiste;}
    int GetSnaga() const {return snaga;}
    char* GetModel() const {return model;}
    TOCKOVI GetTockovi() const {return tockovi;}
    MOTOR GetMotor() const {return motor;}
    void SetBrzina(int b)  {brzina = b;}
    void SetGodiste(int g){godiste = g;}
    void SetSnaga(int s){snaga = s;}
    void SetModel(char* m) {model = m;}
    void SetTockovi(TOCKOVI t){tockovi = t;}
    void SetMotor(MOTOR m){motor = m;}
};

#endif // LOKOMOTIVA_H_INCLUDED
