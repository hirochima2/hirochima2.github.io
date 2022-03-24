#include <iostream>
using namespace std;
int main(){
    double stanje(0); 
    char komanda;
    do {
        cout << "Unesite komandu (U - unos, P - podizanje, K - kraj): "; 
        cin >> komanda;
        if(komanda == 'U' || komanda == 'u') {
            double iznos;
            cout << "Unesite iznos koji ulazete: ";
            cin >> iznos;
            stanje += iznos;
            cout << "Novo stanje na racunu je: " << stanje << endl;
        }
        else if(komanda == 'P' || komanda == 'p') {
        double iznos;
        cout << "Unesite iznos koji podizete: "; 
        cin >> iznos;
        if(stanje < iznos) cout << "Nazalost, nemate dovoljno novca na racunu!\n"; 
        else {
              stanje -= iznos;
              cout << "Novo stanje na racunu je: " << stanje << endl; 
            }
        }
        else if(komanda != 'K' && komanda != 'k') cout << "Neispravna komanda!\n";
    } while(komanda != 'K' && komanda != 'k'); 
    return 0;
}