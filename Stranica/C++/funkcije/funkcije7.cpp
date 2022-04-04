#include <iostream>
using namespace std;

void P(){
    int a = 5;
    cout << a;
    a++;
    cout << a;
}
int main(){
    P();
    P();
    P();
    return 0;
}