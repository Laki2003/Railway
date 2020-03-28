#ifndef LISTAVAGONA_H_INCLUDED
#define LISTAVAGONA_H_INCLUDED
#include "VAGON.h"

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
        int i=0;
        while(i<sifra && help->next!=NULL)
        {
            help= help->next;
        }
     return help->vagon;

    }
};
#endif // LISTAVAGONA_H_INCLUDED
