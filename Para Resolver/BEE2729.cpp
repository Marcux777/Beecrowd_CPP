#include <bits/stdc++.h>

using namespace std;

int main(){
	int n;
	cin >> n;
	
	while(n--){
		string compras, split; //split de cortar :)
		set <string> lista_de_compras;
		cin.ignore();
		getline(cin, compras);
		
		for(int i = 0; i < compras.size(); i++){
			if(compras[i] != ' '){
				split += compras[i] ; //se for diferente de space, pode contatenar
			}else{
				lista_de_compras.insert(split); //senão, eu achei um space e tenho que mandar a palavra que se formou pra dentro do set
				split.clear();
			}
		}
		for(auto it = lista_de_compras.begin(); it != lista_de_compras.end(); it++){
            cout << *it << " ";
        }
        //cout << endl;
	}
	return 0;
}
