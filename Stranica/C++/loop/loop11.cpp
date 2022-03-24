#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Unesite broj: ";
    cin >> n;
    long int proizvod(1);
    for(int i = 1; i <= n; i++) proizvod *= i; 
    cout << n << "! = " << proizvod << endl;
    return 0;
}