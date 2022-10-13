#include <bits/stdc++.h>

using namespace std;

int main(){

	set <string> lista_de_compras;
	string compras, split; //split de cortar :)
	int n;
	
	cin >> n;
	
	while(n--){
		fflush(stdin);
		//cin.ignore();
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
        cout << endl;
        lista_de_compras.clear();
        compras.clear();
        split.clear();
	}
	return 0;
}
