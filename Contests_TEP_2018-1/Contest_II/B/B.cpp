#include <bits/stdc++.h>

using namespace std;

int main(){

    int tc;
    int N;
    int c = 1;
    vector<vector<long long int> > matriz1;
    vector<long long int> aux;
    vector<vector<long long int> > matriz2;

    scanf("%d", &tc);

    while(tc--){
        scanf(" N = %d", &N);

        int opcao = 0;
        long long int m;

        for(long long int i = 0; i < N; i++){
            for(long long int j = 0; j < N; j++){
                scanf(" %lld", &m);
                aux.push_back(m);
                if(m < 0)
                    opcao = 1;
            }
            matriz1.push_back(aux);
            aux.clear();
        }

        for(long long int i = N-1; i >= 0; i--){
            for(long long int j = N-1; j >= 0; j--){
                aux.push_back(matriz1[i][j]);
            }
            matriz2.push_back(aux);
            aux.clear();
        }

        if(matriz1 == matriz2 && opcao == 0)
            printf("Test #%d: Symmetric.\n", c);
        else
            printf("Test #%d: Non-symmetric.\n", c);

        c++;
        opcao = 0;
        matriz1.clear();
        matriz2.clear();
        aux.clear();
    }

    return 0;
}
