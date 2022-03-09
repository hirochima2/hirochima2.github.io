#include <iostream>
using namespace std;
int main(){
    char znak;
    cout << "Unesi neki znak: ";
    cin >> znak;
    cout << "Uneijeli ste znak  " << znak << endl 
    << "Njegova sidra je " << (int)znak << endl;
    return 0;
}