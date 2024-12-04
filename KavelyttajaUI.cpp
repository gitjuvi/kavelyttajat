
#include "KavelyttajaUI.h"
#include "KavelyttajaToiminnot.h"

void naytaUI(Elain elaimet[], int koko) {

    string kayttaja = "";

    cout << "Anna nimesi:";
    getline(cin, kayttaja);

    string komentoString = "";
    string numeroString = "";
    int komento = 0;
    int numero = 0;

    while (komento != 9) {
        cout << "Arvoisa " << kayttaja << " valitse toiminto" << endl;
        cout << "1 - Näytä eläimet" << endl;
        cout << "2 - Varaa eläin" << endl;
        cout << "3 - Vaihda käyttäjää" << endl;
        cout << "9 - Lopeta" << endl;
        
        getline(cin, komentoString);
        komento = annaNumero(komentoString);

        if (komento == 1) {
            tulostaKaikki(elaimet, koko);
        } else if (komento == 2) {
            cout << "Anna varattavan eläimen numero: ";
            getline(cin, numeroString);
            numero = annaNumero(numeroString);

            if (numero < 1 || numero > koko) {
                cout << endl << "Ei ole tuollaista numeroa!" << endl << endl;
                continue;
            }

            if (onkoKavelylla(numero, elaimet)) {
                cout << endl << "Eläin ei ole vapaana!" << endl << endl;
                continue;
            }
            
            varaaElain(numero, kayttaja, elaimet);

        } else if (komento == 3) {
            cout << "Anna nimesi:";
            getline(cin, kayttaja);
            
        } else {
            cout << endl << "Ei ole tuollaista komentoa!" << endl << endl;
            continue;
        }
    }
}