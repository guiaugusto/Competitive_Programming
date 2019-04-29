#include <bits/stdc++.h>

using namespace std;

bool operator<(pair<int, int> a, pair<int, int> b){
	if(a.first == b.first){
		if(a.second == b.second){
			return false;
		}else{
			if(a.second < b.second){
				return true;
			}else{
				return false;
			}
		}
	}else{
		if(a.first > b.first){
			return true;
		}else{
			return false;
		}
	}

}

int main(){
	int n, m;
	multiset< pair<int, int>, greater< pair<int, int> > >  equipes;

	cin >> n >> m;

	int a, b;

	for(int i = 0; i < n; i++){
		cin >> a >> b;
		equipes.insert(make_pair(a, b));
	}

	pair<int, int> last;

	for(auto x : equipes){
		last = x;
		break;
	}

	int points = m*300;

	if(last.first == m){
		if(last.second < points)
			cout << "N" << endl;
		else
			cout << "S" << endl;
	}else{
		if(last.first < m)
			cout << "S" << endl;
		else
			cout << "N" << endl;
	}


	return 0;
}
