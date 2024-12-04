#include "KavelyttajaToiminnot.h"

void tulostaKaikki(Elain elaimet[], int koko) {
    for (int i=0;i < koko;i++) {
        elaimet[i].tulosta();
        cout << endl;
    }
}

bool onkoKavelylla(int numero, Elain elaimet[]) {
    return elaimet[numero-1].kavelylla;
}

void varaaElain(int numero, string kavelyttajanNimi, Elain elaimet[]) {
    elaimet[numero-1].kavelylla = true;
    elaimet[numero-1].kavelyttaja = kavelyttajanNimi;
}

int annaNumero(string numeroString) {
    int numero = -1;
    try {
        numero = stoi(numeroString);
    } catch (...) {
        numero = -1;
    }
    return numero;
}