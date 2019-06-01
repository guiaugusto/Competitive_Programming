#include <bits/stdc++.h>

using namespace std;

int main(){
	set<int> a;
	map<string, int> d;
	vector<string> v;
	int b;
	string aux;
	cin >> b;

	for(int i = 0; i < b; i++){
		cin >> aux;
		d[aux] += 1;
	}
	int maior = 0;
	string escolhido;
	for (map<string,int>::iterator it=d.begin(); it!=d.end(); ++it){
		if(it->second > maior){
			escolhido = it->first;
			maior = it->second;
		}
	}

	cout << escolhido << endl;
}
