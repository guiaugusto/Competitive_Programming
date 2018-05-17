#include <bits/stdc++.h>

using namespace std;

int main(){

  int tc;

  cin >> tc;

  int a, b, c;
  int sum, mul, sum_square;

  while(tc--){

    int i, j, k;
    bool state = false;
    int x, y, z;

    cin >> a >> b >> c;

    for(i = -100; i <= 100; i++){
      for(j = -100; j <+ 100; j++){
        for(k = -100; k <= 100; k++){
            sum = i + j + k;
            mul = i*j*k;
            sum_square = pow(i, 2) + pow(j, 2) + pow(k, 2);

            if(sum == a && mul == b && sum_square == c){
              state = true;
              x = i;
              y = j;
              z = k;
              i = 100;
              j = 100;
              k = 100;
            }
        }
      }
    }

    if(state) cout << x << " " << y << " " << z << endl;
    else cout << "No solution." << endl;

  }

  return 0;
}
