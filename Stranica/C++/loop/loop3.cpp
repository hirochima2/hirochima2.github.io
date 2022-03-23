#include <iostream>
#include <cctype>
using namespace std;
int main(){
    cout << "Unesite recenicu: ";
    char znak = cin.get();
    while(znak != '\n') {
        cout << (char)toupper(znak);
        znak = cin.get();
    }
    cout << endl;
    return 0;
}