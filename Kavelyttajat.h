#pragma once
#include <string>
#include <iostream>
using namespace std;

struct Elain {
    int numero = 0;
    string laji = "";
    string nimi = "";
    string kavelyttaja = "";
    bool kavelylla = false;

    void tulosta() {
        cout << laji << " - " << numero << "nimi: " << nimi << " kavelylla: " << kavelylla << " - kavelyttaja: " << kavelyttaja;
    }
};