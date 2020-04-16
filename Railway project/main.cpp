#include <iostream>

using namespace std;
#include "Voz.h"
#include "TICKETPAYMENT.h"




int main()
{
    datum d;
    d.dan =5;
    d.mesec= 7;
    d.godina = 2020;
    Vreme v;
    v.minuti = 7;
    v.sati= 5;
TicketPayment<Kartica, Ticket> r("Mama mia", "blabla", true, 5, "Blabla", "ggg", "sdgsdfg", true, 2, "sfasd", REGIONALNI, v, 2, 1, 1, d,d,ONEWAY, 50, 125, MASTERCARD, "sdgs", d, 45, EUR, "gklsdj", "kldjfklsd", d, MUSKI, 55);
r.GetOsoba()->GetListaKarata()->print();
r.GetOsoba()->GetListaKarata()->DodajKartu(new RezervacijeiKarte());
r.GetOsoba()->GetListaKarata()->DodajKartu(new RezervacijeiKarte(154, 50));
r.GetOsoba()->GetListaKarata()->DeleteKartu(100);
r.GetOsoba()->GetListaKarata()->print();
Voz a();
Voz b("14545", 2, "wdcwdc", "dwcd",2, 2, 2, "khkh", CoCo, DIZEL, 2, PUTNICKI);
Voz c(b);
printf("%i", b.GetVagoni()->NadjiVagon(1)->GetBrojSedista());
c.GetVagoni()->NadjiVagon(1)->SetBrojsedista(3);
printf("%i", c.GetVagoni()->NadjiVagon(1)->GetBrojSedista());
}
