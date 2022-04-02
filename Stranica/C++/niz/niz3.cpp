#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double temperature[12];
    for(int mjesec = 0; mjesec < 12; mjesec ++) {
        cout << "Unesi prosjecnu temperaturu u toku " << mjesec + 1 << ". mjeseca: ";
        cin >> temperature[mjesec];
    }
    cout << endl << "Mjesec     Temperatura" << endl;
    for(int mjesec = 0; mjesec < 12; mjesec++) cout << setw(6) << mjesec + 1 << setw(14) << temperature[mjesec] << endl;
    return 0;
}