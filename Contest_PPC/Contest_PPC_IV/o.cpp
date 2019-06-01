#include <bits/stdc++.h>

using namespace std;

int main(){

  int q;
  int res;

  scanf("%d", &q);
  res = (q*2)+1;

  int matriz[res+10][res+10];
  memset(matriz, -1, sizeof(matriz));

  bool reverse = false;
  bool reverse2 = false;

  int counter = 0;
  int pos, quantity;
  pos = ceil(res/2);
  int value;
  int c = 0;
  // cout << pos << endl;]

  counter = 0;
  for(int i = 0; i < res; i++){
    quantity = (i*2)+1;
    value = 0;
    c = 0;
    reverse2 = false;
    for(int j = pos - counter; c < quantity; c++, j++){
      matriz[i][j] = value;

      if(j == pos){
        reverse2 = true;
      }

      // cout <<
      if(!reverse2){
        value++;
      }else{
        value--;
      }
    }
    int aux;

    aux = counter;
    if(!reverse){
      aux += 1;
    }else{
      aux -= 1;
    }
    counter = aux;

    if(aux == pos){
      reverse = true;
    }
  }
  bool foi = false;
  for(int i = 0; i < res; i++){
    foi = false;
    if(i == res-1 || i == 0) foi = true;
    for(int j = 0; j < res; j++){
      if(matriz[i][j] < 0){
        if(j > pos) break;
        cout << " ";
      }else{
        cout << matriz[i][j];
      }
      if(matriz[i][j] != 0){
        cout << " ";
      }else{
        if(!foi){
          foi = true;
          cout << " ";
        }
      }
    }
    cout << endl;
  }

  return 0;
}
