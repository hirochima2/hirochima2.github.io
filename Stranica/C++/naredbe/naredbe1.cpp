#include <iostream>
using namespace std;
int main(){
    int starost;
    cout << "Koliko imate godina? ";
    cin >> starost;
    if(starost >=18) {
        cout << "Punoljetni ste" << endl;
        cout << "Imate pravo glasati" << endl;
    }
    else {
        cout << "Maloljetni ste" << endl;
        cout << "Nemate pravo glasati" << endl;
    }
    return 0;
}