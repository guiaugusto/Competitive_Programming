#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;

const int N = 30500;
int p[N];
int num[N];
int arr[N];
void init() {
	fori(i, 0, N) {
		p[i] = i;
		num[i] = 1;
	}
}

int findset(int i) {
	if(p[i] == i) return i;
	p[i] = findset(p[i]);
	return p[i];
}

void unionset(int i, int j) {
	int pi = findset(i);
	int pj = findset(j);
	if(pi == pj) return;

	p[pi] = pj;

	num[pj] += num[pi];
}
int main() {

	int n, m;
	while(scanf("%d %d", &n, &m), n or m) {
		init();

		fori(j, 0, m) {
			int k;
			scanf("%d", &k);

			fori(i, 0, k) {
				scanf("%d", &arr[i]);
			}
			fori(i, 1, k) {
				unionset(arr[i], arr[i - 1]);
			}
		}

		int ans = num[findset(0)];
		printf("%d\n", ans);
	}

	return 0;
}
