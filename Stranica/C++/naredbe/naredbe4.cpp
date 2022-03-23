#include <iostream>
#include <cctype>
using namespace std;
int main(){
    int starost;
    char odgovor;
    cout << "Molim Vas, unesite svoju starost: "; 
    cin >> starost;
    cout << "Da li ste plemenite krvi? (D/N): "; 
    cin >> odgovor;
    bool plemic = toupper(odgovor) == 'D';
    cout << "Da li ste u zatvoru? (D/N): "; 
    cin >> odgovor;
    bool zatvorenik = toupper(odgovor) == 'D'; 
    cout << "Da li ste neuracunljivi? (D/N): "; 
    cin >> odgovor;
    bool neuracunljiv = toupper(odgovor) == 'D'; 
    cout << endl;
    bool pravo_glasa = (starost >= 18) && !(plemic || zatvorenik || neuracunljiv);
    if(pravo_glasa) cout << "Imate pravo glasa" << endl; 
    else cout << "Nemate pravo glasa" << endl;
return 0;
}