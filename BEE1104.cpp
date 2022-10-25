#include <iostream>

using namespace std;

int main(){
    int a,b;
    while(cin >> a >> b && a && b){
        int troca = 0;
        int n;
        int VA[10001] = {0}, VB[10001] = {0};
        for(int i = 0; i < a; i++){
            cin >> n;
            VA[n]++;
        }
        for(int i = 0; i < b; i++){
            cin >> n;
            VB[n]++;
        }
        for(int i = 0; i <= 10000; i++){
            if((VA[i] != 0 && VB[i] == 0) || (VA[i] == 0 && VB[i] != 0)){
                if(VB[i] == 0){
                    VB[i]++;
                }
                if(VA[i] == 0){
                    VA[i]++;
                }
                troca++;
            }
        }
        if(troca > a || troca > b){
            if(a > b){
                troca = b;
            }else{
                troca = a;
            }
        }
        cout << troca << endl;
    }
}