#include <iostream>
using namespace std;
int a, b, c;

void P1(){
    int d, e;
    d = a + 1;
    e = c;
    cout << d << " ";               // Vidokrug od "d" i "e"
    cout << e << " ";
}

void P2(){
    int f;
    f = b;                         // Vidokrug od "f"
    cout << f << " ";
}
int main(){
    a = 1;                        // Glavni program
    b = 2;
    c = 3;
    P1();
    P2();
    return 0;
}