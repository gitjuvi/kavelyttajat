#include <iostream>
#include "KavelyttajaUI.h"
#include "KavelyttajaToiminnot.h"

using namespace std;

int main()
{
    int montako = 8;

    Elain elaimet[3000];
    for (int i=0;i<montako;i++) {
        elaimet[i].numero = (i+1);
        elaimet[i].laji = "kisu";
        elaimet[i].nimi = elaimet[i].laji + "-" + to_string(elaimet[i].numero);
    }

    tulostaKaikki(elaimet, montako);

    naytaUI(elaimet, montako);

    tulostaKaikki(elaimet, montako);

    return 0;
}