#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    double cijene[5];
    cout << "Unesi pet cijena: ";
    for(int i = 0; i < 5; i++) cin >> cijene[i];
    cout << endl;
    cout << "Spisak cijena" << endl;
    cout << "-------------" << endl;
    cout << "Stavka     Cijena" << endl;
    for(int i = 0; i < 5; i++) cout << setw(2) << i + 1 << "." << setw(13) << cijene[i] << endl;
    return 0;
}