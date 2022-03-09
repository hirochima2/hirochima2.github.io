#include <iostream>
using namespace std;
int main(){
    char ch1, ch2;
    cout << "Unesi veliko slovo: ";
    cin >> ch1;
    ch2 = ch1 + 'a' - 'A';
    cout << "Malo slovo je: " << ch2;
    return 0;
}