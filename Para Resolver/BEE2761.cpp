#include <bits/stdc++.h>
using namespace std;

int main(){
    int a;
    float b;
    char c;
    string d;

    cin >> a >> b >> c;

    cin.ignore();
    getline(cin, d);

    cout << fixed << setprecision(6);
    cout << a << b << c << d << endl;
    cout << a << "	" << b << "	" << c << "	" << d << endl;
    cout << "         " << a << "         " << b << "         " << c << d << endl;

}