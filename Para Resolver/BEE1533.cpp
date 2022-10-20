#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    int v[n], aux[n];
    while(cin >> n && n){
        int maior = -1, segmaior, pos;
        for(int i = 0; i < n; i++){
            cin >> v[i];
            aux[i] = v[i];
        }
        sort(v, v+n);
        for(int i = 0; i < n; i++){
            if(v[1] == aux[i]){
                pos = i;
            }
        }
        cout << pos << endl;
    }
}