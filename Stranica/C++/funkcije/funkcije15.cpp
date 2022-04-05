#include <iostream>
#include <iomanip>
using namespace std;

enum Dani {Ponedjeljak, Utorak, Srijeda, Cetvrtak, Petak, Subota, Nedjelja};

void StampajKalendar(int broj_dana, Dani pocetni_dan){
    cout << "  P  U  S  C  P  S  N " <<  endl << setw(3 * pocetni_dan) << " ";
    for(int j = 1; j <= broj_dana; j++) {
        cout << setw(3) << j;
        if(pocetni_dan != Nedjelja) pocetni_dan = Dani(pocetni_dan + 1);
        else{
            pocetni_dan = Ponedjeljak;
            cout << endl;
        }
    }
}
int main(){
    StampajKalendar(31, Srijeda);
    return 0;
}