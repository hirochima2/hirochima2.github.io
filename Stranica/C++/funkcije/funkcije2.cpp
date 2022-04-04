#include <iostream>
using namespace std;
void IspisiPrvuStrofu(){
    cout << "Tekst prve strofe... " << endl;
}
void IspisiDruguStrofu(){
    cout << "Tekst druge strofe..." << endl;
}
void IspisiTrecuStrofu(){
    cout << "Tekst trece strofe..." << endl;
}
void IspisiRefren(){
    cout << "Tekst refrena..." << endl;
}
int main(){
    IspisiPrvuStrofu();
    IspisiRefren();
    cout << endl;
    IspisiDruguStrofu();
    IspisiRefren();
    cout << endl;
    IspisiTrecuStrofu();
    IspisiRefren();
    return 0;
}