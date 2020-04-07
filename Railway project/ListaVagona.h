#ifndef LISTAVAGONA_H_INCLUDED
#define LISTAVAGONA_H_INCLUDED
#include "AVION.h"
#include "KUPE.h"
#include "RESTORAN.h"
#include "Teretni.h"
#include "Metro.h"
 class Polje{
public: Vagon* vagon;
Polje* next;
};

class Lista{
private:
    Polje* head, *kraj;
public:
    Lista()
    {
        head=kraj=NULL;
    }
   void addVagon(Vagon* vagon)
    {
        Polje* newVagon = new Polje();
        newVagon->vagon = vagon;
        newVagon->next = NULL;
        if(head == NULL)
        {
            head = newVagon;
            kraj = newVagon;
            return;
        }
        kraj->next = newVagon;
        kraj = newVagon;
    }
    Vagon* NadjiVagon(int sifra)
    {
        Polje* help = head;
        int i=1;
        while(i<sifra && help->next!=NULL)
        {
            help= help->next;
            ++i;
        }
        if(i!=sifra)
        {
            printf("Nepostoji vagon sa ovim brojem, pa smo Vam vratili poslednji vagon u nizu!");
        }
return help->vagon;

    }
 void deleteVagon()
 {
     if(head==NULL)
     {
         return;
     }
     if(head->next==NULL)
     {
         Polje* help = head;
         delete(help->vagon);
         delete (help);
         head=NULL;
         return;
     }
     Polje* help = head;
while(help->next->next!=NULL)
    help=help->next;
Polje* del = help->next;
delete(del->vagon);
delete (del);
help->next = NULL;
kraj=help;

 }
void print()
{
    Polje* help = head;
    while(help!=NULL)
    {
        printf("%i", help->vagon->GetOprema());
        help=help->next;
    }
}
};
#endif // LISTAVAGONA_H_INCLUDED
