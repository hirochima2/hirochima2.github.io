#include <iostream>
using namespace std;

const char Razmak(' '), Zvjezdica('*');
int main(){                             // Glavni program
    void StampajTablu(int, int);        // Prototip funkcije "StampajTablu"
    int m;
    int n;
    cout << "Ovaj program prikazuje sahovsku tablu. " << endl << endl;
    cout << "Unesite sirinu svakog kvadrata, u znakovima: ";
    cin >> m;
    cout << "Unesite visinu svakog kvadrata, u linijama: ";
    cin >> n;
    cout << endl << endl;
    StampajTablu(n,m);
    return 0;
}
// Stampa sahovsku tablu
void StampajTablu(int visina, int sirina){
    void StampajNeparniRed(int, int);
    void StampajParniRed(int, int);
    for(int i = 1; i <= 4; i++){
        StampajNeparniRed(visina,sirina);
        StampajParniRed(visina,sirina);
    }
}
// Stampa neparni red
void StampajNeparniRed(int visina, int sirina) {
    void StampajLinijuNeparnogReda(int);
    for(int i = 1; i <= visina; i++) StampajLinijuNeparnogReda(sirina);
}
// Stampa parni red
void StampajParniRed(int visina, int sirina) {
    void StampajLinijuParnogReda(int);
    for(int i = 1; i <= visina; i++) StampajLinijuParnogReda(sirina);
}
// Stampa liniju neparnog reda
void StampajLinijuNeparnogReda(int sirina_kvadrata) {
    void StampajZnakove(int,char);
    for(int i = 1; i <= 4; i++){
        StampajZnakove(sirina_kvadrata, Razmak);
        StampajZnakove(sirina_kvadrata, Zvjezdica);
    }
    cout << endl;
}
// Stampa liniju parnog reda
void StampajLinijuParnogReda(int sirina_kvadrata){
    void StampajZnakove(int, char);
    for(int i = 1; i <= 4; i++){
        StampajZnakove (sirina_kvadrata, Zvjezdica);
        StampajZnakove (sirina_kvadrata, Razmak);
    }
    cout << endl;
}
// Stampa niz znakova
void StampajZnakove(int broj_znakova, char znak){
    for(int i = 1; i <= broj_znakova; i++) cout << znak;
}