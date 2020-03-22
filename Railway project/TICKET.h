#ifndef TICKET_H_INCLUDED
#define TICKET_H_INCLUDED
#include "FIP CARDS.h"
enum TipKarte{RETURN, ONEWAY};

class Ticket{
TipKarte tip;
datum datumkretanja;
datum povratka;

};

#endif // TICKET_H_INCLUDED
