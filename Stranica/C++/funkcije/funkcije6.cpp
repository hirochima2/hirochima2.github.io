#include <iostream>
using namespace std;

int sirina_polja;                       // Sirina kvadratnog polja
int visina_polja;                       // Visina kvadratnog polja

void StampajRazmake(){
    for(int i = 1; i <= sirina_polja; i++) cout << " ";
}
void StampajZvjezdice(){
    for(int i = 1; i <= sirina_polja; i++) cout << "*";
}
void StampajLinijuNeparnogReda(){
    for(int i = 1; i <= 4; i++) {
        StampajRazmake();
        StampajZvjezdice();
    }
    cout << endl;
}
void StampajLinijuParnogReda(){
    for(int i = 1; i <= 4; i++){
        StampajZvjezdice();
        StampajRazmake();
    }
}
void StampajNeparniRed(){
    for(int i = 1; i <= visina_polja; i++) StampajLinijuNeparnogReda();
}
void StampajParniRed(){
    for(int i = 1; i <= visina_polja; i++) StampajLinijuParnogReda();
}
void StampajTablu(){
    for(int i = 1; i <= 4; i++){
        StampajNeparniRed();
        StampajParniRed();
    }
}
int main(){
    cout << "Ovaj program prikazuje sahovsku tablu." << endl << endl;
    cout << "Unesite sirinu svakog kvadrata, u znakovima: ";
    cin >> sirina_polja;
    cout << "Unesite visinu svakog kvadrata u linijama: ";
    cin >> visina_polja;
    cout << endl << endl;
    StampajTablu();
    return 0;
}