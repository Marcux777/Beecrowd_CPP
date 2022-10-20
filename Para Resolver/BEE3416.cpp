#include <bits/stdc++.h>

using namespace std;

int main(){
    int n, l, d, cont = 1, aux;
    cin >> n >> l >> d;
    aux = l*1000;
    while(aux < (n*d)){
        aux += aux;
        cont++;
    }
    cout << l*cont << endl;
}