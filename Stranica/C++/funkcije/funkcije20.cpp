#include <iostream>
#include <cmath>
using namespace std;

bool DaLiJeProst(long int n){
    long int korijen = sqrt(n);
    if(n != 2 && n % 2 == 0) return false;
    else 
        for(long int i = 3; i <= korijen; i +=2)
            if(n % i == 0) return false;
        return true;
}
int main(){
    cout << "Prosti brojevi od 1 do 1000" << endl;
    for(int i = 1; i <= 1000; i++)
        if(DaLiJeProst(i)) cout << i << " ";
    return 0;
}