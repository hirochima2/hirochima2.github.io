#include <iostream>
using namespace std;

int NZD(int p, int q){
    int ostatak;
    do{
        ostatak = p % q; p = q; q = ostatak;
    } while(ostatak);
    return p;
}
int main(){
    int a,b;
    cout << "Unesite dva broja: ";
    cin >> a >> b;
    cout << "Njihov NZS je " << a * b / NZD(a, b) << endl;
    return 0;
}