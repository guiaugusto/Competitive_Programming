#include <bits/stdc++.h>

using namespace std;

int main(){

  int to, tp, tb;
  int mo, mp, mb;
  int p;

  scanf("%d %d %d", &to, &tp, &tb);
  scanf("%d %d %d", &mo, &mp, &mb);
  scanf("%d", &p);

  int qnt_m = 0, qnt_tr = 0;
  int qnt_p = 0;

  qnt_tr = to + tp + tb;
  qnt_m = mo + mp + mb;

  qnt_p += floor(qnt_tr / 5.0) + floor(qnt_m / 10.0);
  int resto_tr = qnt_tr % 5;
  int resto_m = qnt_m % 10;

  if(resto_tr > 0) qnt_p++;
  if(resto_m > 0) qnt_p++;

  if(qnt_p <= p){
    cout << "YES" << endl;
  }else{
    cout << "NO" << endl;
  }

  return 0;
}
