#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    while(cin >> n && n){
        int v, maior = -1, segmaior, pos;
        for(int i = 0; i < n; i++){
            cin >> v;
            if(maior < v){
                pos = i;
                segmaior = maior;
                maior = v;
            }
        }
        //cout << segmaior << endl;
        cout << pos << endl;
    }
}