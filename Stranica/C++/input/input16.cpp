#include <iostream>
using namespace std;
int main(){
    const int LicnaNaknada(5000), NaknadaZaDjecu(1000);
    int prihod, broj_djece;
    cin >> prihod;
    cin >> broj_djece;
    // Oporezovani prihod je prihod umanjen za iznos naknada
    int oporezovani_prihod = prihod - LicnaNaknada - broj_djece * NaknadaZaDjecu;

    // Porez se racuna kao cijeli broj funti 
    int porez = oporezovani_prihod / 3;
    cout << prihod << oporezovani_prihod << porez << prihod - porez;
    return 0;
}