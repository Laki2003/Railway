#include <iostream>

using namespace std;
#include "ruta.h"
int main()
{
Ruta r;
Ruta f(r);
f.getFrom()->SetNazivStanice();
f.getTo()->SetNazivStanice();
printf("%s",f.getFrom()->GetNazivStanice());
printf("%s", r.getFrom()->GetNazivStanice());
    return 0;

}
