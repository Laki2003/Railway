#include <iostream>

using namespace std;
#include "Voz.h"
#include "TICKETPAYMENT.h"




int main()
{
Voz a("1AAA", 1980, "Freciarossa", 5,85,12,23,"Ma", CoCo, ELEKTRICNI, 5, PUTNICKI);
a.SetBrojVagona(6);
a.SetBrojVagona(2);
printf("%i", a.GetVagoni()->NadjiVagon(3)->GetKonobar());

/*Lista* a = new Lista();
a->addVagon(new Metro());
a->addVagon(new Avion());
a->addVagon(new Restoran());
a->addVagon(new Avion());
a->addVagon(new Avion());
for(int i=0;i<3;++i){
a->deleteVagon();
}
a->print();*/
    return 0;

}
