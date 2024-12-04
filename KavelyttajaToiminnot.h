#pragma once
#include "Kavelyttajat.h"

void tulostaKaikki(Elain elaimet[], int koko);
bool onkoKavelylla(int numero, Elain elaimet[]);
void varaaElain(int numero, string kavelyttajanNimi, Elain elaimet[]);
int annaNumero(string numeroString);
