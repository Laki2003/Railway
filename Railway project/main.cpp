#include <iostream>

using namespace std;
#include "Voz.h"
#include "TICKETPAYMENT.h"




int main()
{
Voz a("1AAA", 1980, "Freciarossa", 5,85,12,23,"Ma", CoCo, ELEKTRICNI, 3,TERETNI);
printf("%s\n",a.GetVagoni()->NadjiVagon(1)->GetNazivRobe());
Voz b(a);
printf("%s\n",a.GetVagoni()->NadjiVagon(1)->GetNazivRobe());
b.GetVagoni()->NadjiVagon(1)->SetNazivRobe("blabalbla");
printf("%s", b.GetVagoni()->NadjiVagon(1)->GetNazivRobe());
Ticket t;
Osoba o;
datum d{1,1,2020};

TicketPayment<Kartica, Ticket> s(5, o, t, MASTERCARD, "1254521", d, 15, EUR);
s.GetKarta()->SetCena(68);
printf("%i %i", t.GetCena(), s.GetKarta()->GetCena());
    return 0;

}
