#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    const int LicnaNaknada(5000), NaknadaZaDjecu (1000);
    int prihod, broj_djece;
    cout << "Unesi god. prihod: ";
    cin >> prihod;
    cout << "Unesi broj djece: ";
    cin >> broj_djece;
    cout << endl;
    int oporezovani_prihod = prihod - LicnaNaknada - broj_djece * NaknadaZaDjecu;
    int porez = oporezovani_prihod / 3;
    cout << "Prihod:            "<< setw(5) << prihod << endl
     << "Oporezovani prihod: " << setw(5) << oporezovani_prihod << endl
     << "Poreska dazbina:    " << setw(5) << porez << endl
     << "Cisti prihod:       " << setw(5) << prihod - porez << endl;
     return 0;


}