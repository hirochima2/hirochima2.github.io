#include <iostream>
using namespace std;
int main(){
    const double PI(3.141592654);
    double poluprecnik;
    cout << "Unesi poluprecnik: ";
    cin >> poluprecnik;
    double obim = 2 * PI * poluprecnik;
    double povrsina = PI * poluprecnik * poluprecnik;
    cout << "Obim je " << obim << endl 
        << "Povrsina je " << povrsina << endl;
    return 0;
}