#include <iostream>
#include <cmath>
using namespace std;
int main(){
    double a, b, c;
    cout << "a = ";
    cin >> a;
    cout << "b = ";
    cin >> b;
    cout << "c = ";
    cin >> c;
    double d = b * b - 4 * a * c;
    if(d >= 0) {
        double x1 = (-b - sqrt(d)) / (2 * a);
        double x2 = (-b + sqrt(d)) / (2 * a);
        cout << "x1 = " << x1 << "\nx2 = " << x2 << endl;
} 
    else {
        double re = -b / (2*a);
        double im = abs(sqrt(-d) / (2 * a));
        cout << "x1 = (" << re << "," << -im << ")\n"
        "x2 = (" << re << "," << im << ")\n"; 
}
    return 0;
}