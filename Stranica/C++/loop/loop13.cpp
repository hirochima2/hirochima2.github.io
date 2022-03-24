#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char odgovor; 
    do {
        int broj; 
        do {
            cout << "Unesite broj izmedu 2 i 10: ";
            cin >> broj;
            if(broj < 2 || broj > 10) cout << "Neispravan broj!\n";
        } while (broj < 2 || broj > 10); 
        for(int i = 1; i <= 10; i++) cout << broj << " x " << i << " = " << broj * i << endl; 
        cout << "Zelite li unijeti novi broj? ";
        bool dobar_odgovor;
        do {
            cin >> odgovor;
            cin.ignore(10000, '\n');
            odgovor = toupper(odgovor);
            dobar_odgovor = odgovor == 'D' || odgovor == 'N'; 
            if(!dobar_odgovor) cout << "Odgovorite sa 'D' ili 'N'!\n";
        } while(!dobar_odgovor); 
    } while(odgovor == 'D'); 
    return 0; 
}