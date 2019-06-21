#include <bits/stdc++.h>

using namespace std;

int W[100];
int V[100];
int memo[100][100];

int knapsack(int i, int w){
  if(i < 0) return 0;

  if(memo[i][w] != -1) return memo[i][w];

  if(w < W[i]) return memo[i][w] = knapsack(i-1, w);

  return max(knapsack(i-1, w), knapsack(i-1, w-W[i]) + V[i]);

}

int main(){

  int qtd_p;
  int max_pizza;
  int temp_tot, qnt_pizz;

  while(cin >> qtd_p, qtd_p != 0){
    cin >> max_pizza;
    memset(V, -1, sizeof(V));
    memset(W, -1, sizeof(W));
    memset(memo, -1, sizeof(memo));

    for(int i = 0; i < qtd_p; i++){
      cin >> temp_tot;
      cin >> qnt_pizz;

      V[i] = temp_tot;
      W[i] = qnt_pizz;
    }

    cout << knapsack(qtd_p-1, max_pizza) << " min." << endl;
  }

  return 0;
}
