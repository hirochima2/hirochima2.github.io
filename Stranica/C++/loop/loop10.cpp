#include <iostream>
#include <iomanip>
using namespace std;
int main(){
    cout << "Celzijusi:  Farenhajti:" << endl;
    cout << "-----------------------" << endl;
    for(double celzijusi = 0; celzijusi <= 100; celzijusi += 10){
        double farenhajti = 9 * celzijusi / 5 + 32;
        cout << setw(10) << celzijusi << setw(13) << farenhajti << endl;
    }
    return 0;
}