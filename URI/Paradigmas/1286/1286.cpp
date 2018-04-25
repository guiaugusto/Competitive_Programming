#include <bits/stdc++.h>
#define MAX_ITENS 1000
#define MAX_W 1000
#define MAX_V 1000

using namespace std;

int W[MAX_ITENS];
int V[MAX_ITENS];

int memo[MAX_W][MAX_V];

int knapsack(int i, int w){

    if (i < 0 || w <= 0) return 0;

    if (memo[i][w] != -1) return memo[i][w];

    if (W[i] > w) return memo[i][w] = knapsack(i - 1, w);

    return memo[i][w] = max(knapsack(i - 1, w),
                                knapsack(i - 1, w - W[i]) + V[i]);

}

int main (){

    int tc;

    while(scanf("%d", &tc), tc != 0){

        memset(memo, -1, sizeof memo);

        int pedidos;

        scanf("%d", &pedidos);

        for(int i = 0; i < tc; i++){
            scanf("%d", &V[i]);
            scanf("%d", &W[i]);
        }

        printf("%d min.\n", knapsack(tc - 1, pedidos));

    }

    return 0;
}
