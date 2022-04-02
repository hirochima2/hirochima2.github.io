#include <iostream>
using namespace std;
int main(){
    const int BrojSlova(5);
    char rijec[BrojSlova];
    cout << "Unesi rijec od " << BrojSlova << " slova: ";
    for(int i = 0; i < BrojSlova; i++) cin >> rijec[i];
    cout << "Rijec izgovorena naopako glasi: ";
    for(int i = BrojSlova - 1; i >= 0 ; i--) cout << rijec[i];
    return 0;
}