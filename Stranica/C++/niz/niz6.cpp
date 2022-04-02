#include <iostream>
using namespace std;
int main(){
    const int BrojDana(30);
    double max_temperature[BrojDana], min_temperature[BrojDana];
    for(int dan = 0; dan < BrojDana; dan++){
        do{
            cout << "Unesite minimalnu temperaturu u toku " << dan + 1 << ". dana: ";
            cin >> min_temperature[dan];
            cout << "Unesite maksimalnu temperaturu u toku " << dan + 1 <<". dana: ";
            cin >> max_temperature[dan];
            if(min_temperature[dan] > max_temperature[dan]){
                cout << "Neispravan unos!" << endl;
            }
        }while (min_temperature[dan] > max_temperature[dan]);
    }
        double max_temperatura(max_temperature[0]);
        double min_temperatura(min_temperature[0]);
        for(int dan = 1; dan < BrojDana; dan++){
            if(max_temperature[dan] > max_temperatura) max_temperatura = max_temperature[dan];
            if(min_temperature[dan] < min_temperatura) min_temperatura = min_temperature[dan];
        }
        cout << "Maksimalna temperatura zabilježena u toku mjeseca je " << max_temperatura << "." << endl;
        cout << "Minimalna temperatura zabilježena u toku mjeseca je " << min_temperatura << "." << endl;
        int br_dana_sa_max_temp(0);
        for(int dan = 0; dan < BrojDana; dan++){
            if(max_temperature[dan] == max_temperatura) br_dana_sa_max_temp++;
        }
        cout << "Maksimalna temperatura zabilježena je " << br_dana_sa_max_temp << " puta u toku mjeseca." << endl;
        bool da_li_je_ljeto(true), da_li_je_zima(false);
        for(int dan = 0; dan < BrojDana; dan++){
        if(max_temperature[dan] < 0 ){
            da_li_je_zima = true;
            break;
        }
    }
        for(int dan = 0; dan < BrojDana; dan++){
            if(min_temperature[dan] < 15){
                da_li_je_ljeto = false;
                break;
            }
        }
        if(da_li_je_ljeto && da_li_je_zima) cout << "Temperaturne oscilacije ovog mjeseca su veoma cudne.";
        else if(da_li_je_ljeto) cout << "Jako je toplo, vjerovatno je ljeto.";
        else if(da_li_je_zima) cout << "Vjerovatno je zima, temperature su bile ispod nule.";
        return 0;
    }