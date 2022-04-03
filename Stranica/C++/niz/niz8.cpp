#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;
int main(){
    const int PragZaProlaz(55);
    int broj_kandidata;
    cout << "Koliko kandidata je pristupilo ispitu? ";
    cin >> broj_kandidata;
    vector<int> poeni(broj_kandidata);
    for(int i = 0; i < broj_kandidata; i++) {
        cout << "Unesi broj poena za " << i + 1 << "kandidata: ";
        cin >> poeni[i];
    }
    cout << endl << "Kandidat   Status" << endl;
    for(int i = 0; i < broj_kandidata; i++){
        cout << setw(7) << i + 1 << ".";
        if(poeni[i] >= PragZaProlaz) cout << "POLOZIO" << endl;
        else cout << "PAO" << endl;
    }
    return 0;
}