#include <iostream>
using namespace std;
int main(){
    const double JedinicnaCijena1(24.50);
    const double JedinicnaCijena2(12.50);
    const double FiksnaCijena_2(400);
    int broj_kancelarija;
    cout << "Koliko ima kancelarija? ";
    cin >> broj_kancelarija;
    double cijena_1(0), cijena_2(0);
    for(int i = 1; i <= broj_kancelarija; i++) {
        double duzina, sirina;
        cout << "Unesite sirinu " << i << ". kancelarije u metrima: "; 
        cin >> sirina;
        cout << "Unesite duzinu " << i << ". kancelarije u metrima: "; 
        cin >> duzina;
        double povrsina = duzina * sirina;
        cijena_1 += JedinicnaCijena1 * povrsina;
        cijena_2 += JedinicnaCijena2 * povrsina + FiksnaCijena2;
    }
    cout << "Prodavač 1 ce Vam naplatiti " << cijena_1 << " KM.\n";
    cout << "Prodavač 2 ce Vam naplatiti " << cijena_2 << " KM.\n";
    cout << "Preporucujem Vam ";
    if(cijena_1 < cijena_2) cout << "prvog"; 
    else cout << "drugog";
    cout << " proizvodaca, jer je jeftiniji.\n";
    return 0;
}