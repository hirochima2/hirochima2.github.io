#include <iostream>
using namespace std;

int broj_ponavljanja;

void IspisiPozdrav(){
    for(int i = 1; i <= broj_ponavljanja; i++) cout << "Pozdrav" << endl;
}
int main(){
    cout << "Koliko puta zelite pozdrav? ";
    cin >> broj_ponavljanja;
    IspisiPozdrav();
    return 0;
}