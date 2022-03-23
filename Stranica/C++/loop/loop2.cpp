#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Unesite n: ";
    cin >> n;
    double suma(0);
    int i(1);
    while (i <= n) {
        suma += 1 / i;
        i++;
    }
    cout << "Suma reciprocnih vrijednosti brojeva od 1 do " << n << " iznosi " << suma << endl;
    return 0 ;
}