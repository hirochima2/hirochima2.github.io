#include <iostream>
#include <vector>
using namespace std;
int main(){
     char znak;
    vector<char> recenica;
    cout << "Unesi recenicu: ";
    while((znak = cin.get()) != '\n') recenica.push_back(znak);
    cout << "Recenica izgovorena naopako glasi: ";
    for(int i = recenica.size() - 1; i >= 0; i--) cout << recenica[i];
    return 0;
}