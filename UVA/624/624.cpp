#include <bits/stdc++.h>
#define MAX_CDS 1000
#define MAX_TIME 1000

using namespace std;

int memo[MAX_CDS][MAX_TIME];
vector<int> W;
int taken[MAX_CDS][MAX_TIME];

int knapsack(int i, int w){

  if(i < 0 || w <= 0) return 0;

  if(memo[i][w] != -1) return memo[i][w];

  if(W[i] > w) return knapsack(i - 1, w);

  auto not_take = knapsack(i - 1, w);
  auto take = knapsack(i - 1, w - W[i]) + W[i];

  if(take > not_take){
    taken[i][w] = true;
    return memo[i][w] = take;
  }
  else return memo[i][w] = not_take;

}

void reconstruct(int i, int w){

  stack<int> s;

  do{
    if(taken[i][w]){
        w -= W[i];
        s.push(i);
    }
  }while(i--);

  while(!s.empty()){
    cout << W[s.top()] << " ";
    s.pop();
  }

}

int main (){

  int size_time;
  int qtd;
  int aux;

  while(cin >> size_time){

    memset(memo, -1, sizeof memo);
    memset(taken, false, sizeof taken);

    cin >> qtd;

    for(int i = 0; i < qtd; i++){
      cin >> aux;
      W.push_back(aux);
    }

    int res = knapsack(qtd - 1, size_time);

    reconstruct(qtd - 1, size_time);

    cout << "sum:" << res << endl;

    W.clear();
  }

  return 0;
}
