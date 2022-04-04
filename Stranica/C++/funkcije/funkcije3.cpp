#include <iostream>
using namespace std;

void IspisiPozdrav(){
    for(int i = 1; i <= 4; i++) cout << "Pozdrav!" << endl;
}
int main(){
    int i = 10;
    cout << i << endl;
    IspisiPozdrav();
    cout << i << endl;
    return 0;
}