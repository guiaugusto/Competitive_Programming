#include <bits/stdc++.h>

using namespace std;

int main(){
	string s;
	int a, j, b, auxA = 0, auxB = 0;
	cin >> s;

	for(int i = 0; i < s.size(); i++){
		a = (int)s[i]-48;

		if(a == 1){
			if(auxB != 0){
				auxB = 0;
			}
			auxA++;
		}else{
			if(auxA != 0)
				auxA = 0;
			auxB++;
		}

		if(auxA == 7 || auxB == 7)
			break;
	}

	if(auxA == 7 || auxB == 7){
		cout << "YES" << endl;
	}else{
		cout << "NO" << endl;
	}

	return 0;
}
