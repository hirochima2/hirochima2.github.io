#include <iostream>
using namespace std;

void IspisiPozdrav(int n) {
    for(int i = 1; i <= n; i++) cout << "Pozdrav" << endl;
}
int main(){
    int n;
    cout << "Koliko puta zelis pozdrav? ";
    cin >> n;
    IspisiPozdrav(n);
    return 0;
}