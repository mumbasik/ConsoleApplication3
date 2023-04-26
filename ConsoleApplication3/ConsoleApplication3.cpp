#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    //N1!
    double a = 20.5;
     double b = 30.5;
     double c = 30.5;
    cout << a + b + c<<"\n";
    //N3!
    int i;
    int x;
    cout << "i = "; cin >> i; "\n";
    cout << "x = "; cin >> x; "\n";
    cout << "Result = " << pow(i, x) << "\n";
    //N4!
    double PIN = 4.25;
    int r;
    cout << "enter radius "; cin >> r;"\n";
    cout << PIN + 2 * r << "\n";


    //N5!
    int hrvn;
    double dollar = 36.87;
    double euro = 40.73;
    double bitcoin = 1008981.41;
    cout << "count of Hrivna "; cin >> hrvn;"\n";
    cout << hrvn / dollar <<"\n";
    cout << hrvn / euro <<"\n";
    cout << hrvn / bitcoin<<"\n";
    //N6!
    int km= 12;
    int land = 5280;
    int sea = 6080;
    cout << km * 3280.84 / 5280;"\n";
    cout << km * 3280.84 / 6080;"\n";
    //N7!
    int proc = 13;
    int numb = 18;
    cout << "procent of number" << numb * proc / 100 << "\n";
    //N8!
    int S;
    cout << "grd, cel "; cin >> S;
    cout << "Fa  " << S * 9 / 5 + 32 << "\n";
    cout << "Ke  " << S + 273.15 << "\n";
    cout << "Reo " << S * 1.25000 << "\n";
    cout << "Del  " << S + 100 / 1.50000 << "\n";
    //N9!
    string k = "dima";
    string n = "c++";
    string o = "blabla";
    n = k;
    k = o;
    cout << "N = " << n << "k = " << k << "\n";
    string  q = "okok";
    string  f = "wowow";
    cout << "q  " << q + f  << "\n f = " << f + q << "\n";
   


  


}


