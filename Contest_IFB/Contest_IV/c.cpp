#include <bits/stdc++.h>

using namespace std;

int main(){

	multiset<int> m;

	string aux;

	cin >> aux;

	for(int i = 0; i < aux.size(); i++){
		m.insert(aux[i]);
	}

	int pares = 0;
	int impares = 0;
	map<int, int> p;

	for(auto x : m){
		p[x] += 1;
	}

	for(int i = 65; i < 91; i++){
		if(p[i] % 2 == 0){
			pares++;
		}else{
			impares++;
		}
	}

	if(impares > 1){
		cout << "Nao" << endl;
	}else{
		cout << "Sim" << endl;
	}

	return 0;

}
