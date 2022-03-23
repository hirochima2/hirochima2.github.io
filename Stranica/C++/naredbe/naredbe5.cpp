#include <iostream>
using namespace std;
int main(){
    double prvi, drugi;
    char operacija;
    cin << prvi << operacija << drugi; 
    switch(operacija) { 
        case '+': 
            cout << prvi + drugi << endl;
            break;
        case '-': 
            cout << prvi - drugi << endl;
            break;
        case '*': 
            cout << prvi * drugi << endl;
            break;
        case '/': 
            cout << prvi / drugi << endl;
            break;
        default: cout << "Nedozvoljena operacija" << endl; 
    }
    return 0;
}