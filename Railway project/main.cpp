#include <iostream>
using namespace std;
#include "REZERVACIJA.h"

int main()
{
Rezervacija<Kartica> k;

printf("%i",k.GetPlacanje().GetNacinplacanja().GetSigurnosniKod());

    return 0;

}
