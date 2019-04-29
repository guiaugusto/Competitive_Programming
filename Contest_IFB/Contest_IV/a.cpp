#include <bits/stdc++.h>

using namespace std;

int main(){

	ios::sync_with_stdio(false);
	int q;
	scanf("%d", &q);
	int aux, neew;

	int mid;
	bool is_valid = false;

	for(int i = 0; i < q; i++){
		scanf("%d", &aux);
		is_valid = false;

		while(aux){
		if(aux == 2){
			is_valid = false;
			break;
		} else if(aux % 2 == 0 || aux == 1){
			is_valid = true;
			break;
		}else{
			is_valid = false;
			mid = sqrt(aux);
			for(int j = 3; j <= mid; j+=2){
				if(aux % j == 0){
					is_valid = true;
					break;
				}
			}
		}
		if(is_valid == true){
			break;
		}

			aux = aux/10;
		}

		if(is_valid == false){
			printf("S\n");
		}else{
			printf("N\n");
		}
	}

	return 0;
}
