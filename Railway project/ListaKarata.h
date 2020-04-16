#ifndef LISTAKARATA_H_INCLUDED
#define LISTAKARATA_H_INCLUDED
#include "RezervacijeiKarte.h"
class Node{
public:
RezervacijeiKarte* w;
Node* next;
};

class ListaKarata{
    private:
Node* head, *kraj;
    public:
        ListaKarata()
        {
            head=kraj=NULL;
        }
        void DodajKartu(RezervacijeiKarte* s)
        {
            Node* newKarta = new Node();
            newKarta->w = s;
            newKarta->next = NULL;
            if(head==NULL)
            {
                head=newKarta;
                kraj = newKarta;
                return;
            }
            kraj->next = newKarta;
            kraj = kraj->next;

        }
        Node* NadjiKartu(int s)
        {
            Node* help = head;
            while(help!=NULL && help->w->GetSifra()!=s)
            {
                help = help->next;
            }

        return help;
        }
        void DeleteKartu(int s)
        {
Node* help = head;
if((head->w)->GetSifra()==s)
{
    if(head->next==NULL)
    {
        Node* del = head;
        delete(del->w);
        delete(del);
        head=NULL;

    }
    else{
        Node* del= head->next;
        delete(head->w);
        delete(head);
        head = del;
    }
}
else{
    Node* del = help->next;
    while(del!=NULL && del->w->GetSifra()!=s)
    {
        help = help->next;
        del = del->next;
    }
    if(del==NULL)
    {
        printf("Nema karte");
        return;
    }
    if(del->next==NULL)
    {
        help->next=NULL;
    }
    else{
    help->next = del->next;}
    delete(del->w);
    delete(del);

}
        }
void print()
{
    Node* help = head;
    while(help!=NULL)
    {
        printf("%i\n", help->w->GetSifra());
        help= help->next;
    }
}
};

#endif // LISTAKARATA_H_INCLUDED
