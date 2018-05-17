#include <bits/stdc++.h>
#define MAX 1000
#define MAX 1000

using namespace std;

int memo[MAX][MAX];
vector<int> W;

int knapsack(int i, int w){

  if(i < 0 || w <= 0) return 0;

  if(memo[i][w] != -1) return memo[i][w];

  if(W[i] > w) return knapsack(i - 1, w);

  return max(knapsack(i - 1, w), knapsack(i - 1, w - W[i]) + W[i]);
}

int main (){

  int tc;
  int size_bar;
  int num_bars;
  int aux;

  cin >> tc;

  while(tc--){

    memset(memo, -1, sizeof memo);

    cin >> size_bar;

    cin >> num_bars;

    for(int i = 0; i < num_bars; i++){
      cin >> aux;
      W.push_back(aux);
    }

    if(knapsack(num_bars - 1, size_bar) == size_bar){
      cout << "YES" << endl;
    }else{
      cout << "NO" << endl;
    }

    W.clear();

  }

  return 0;
}
