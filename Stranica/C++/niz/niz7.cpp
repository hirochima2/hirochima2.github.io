#include <iostream>
using namespace std;
int main(){
    int tabela[3][3]; // Tabela dimenzije 3x3
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            tabela[i][j] = i * 3 + j;
        }
    }
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++) cout << tabela[i][j] << " ";
        cout << endl;
    }
    return 0;
}