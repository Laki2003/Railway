#ifndef METRO_H_INCLUDED
#define METRO_H_INCLUDED

class Metro{

int brojsedista;
bool GPSMap;
bool prilagodjenPosebnePotrebe;
public:
Metro()
{
    brojsedista = 20;
    GPSMap = true;
    prilagodjenPosebnePotrebe = false;
}
Metro(int b, bool GSP, bool prilagodjen)
{
    brojsedista = b;
    GPSMap = GSP;
    prilagodjenPosebnePotrebe = prilagodjen;
}
Metro(const Metro &m)
{
    brojsedista = m.brojsedista;
    GPSMap = m.GPSMap;
    prilagodjenPosebnePotrebe = m.prilagodjenPosebnePotrebe;
}
int GetNumberofSeats() const{return brojsedista;}
bool GetGPSMap() const {return GPSMap;}
bool GetprilagodjenPosebnePotrebe() const {return prilagodjenPosebnePotrebe;}
void SetNumberofSeats(int b) {brojsedista=b;}
void SetGPSMap(bool G) {GPSMap = G;}
void SetprilagodjenPosebnePotrebe(bool p){prilagodjenPosebnePotrebe = p;}
};

#endif // METRO_H_INCLUDED
