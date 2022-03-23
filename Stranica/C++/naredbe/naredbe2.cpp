#include <iostream>
using namespace std;
int main(){
    const double JedinicnaCijena1(24.50);
    const double JedinicnaCijena2(12.50);
    const double FiksnaCijena2(400);
    double duzina, sirina;
    cout << "Unesi sirinu kancelarije u metrima: ";
    cin >> sirina;
    cout << "Unesi duzinu kancelarije u metrima: ";
    cin >> duzina;
    double povrsina = duzina * sirina;
    double cijena_1 = JedinicnaCijena1 * povrsina;
    double cijena_2 = JedinicnaCijena2 * povrsina + FiksnaCijena2; 
    cout << "Prodavac 1 ce Vam naplatiti " << cijena_1 << " KM.\n"
    "Prodavac 2 ce Vam naplatiti " << cijena_2 << " KM.\n"
    "Preporucujem Vam ";
    if (cijena_1 < cijena_2) cout << "prvog"; 
    else cout << "drugog";
    cout << " prodavaca, jer je jeftiniji.\n"; 
    return 0;
}