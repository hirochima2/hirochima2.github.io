#include <iostream>
#include <cctype>
using namespace std;
int main(){
    char ch;
    cout << "Unesi veliko slovo: ";
    cin >> ch;
    cout << "Malo slovo je: " << (char)tolower(ch) << endl;
    return 0;
}