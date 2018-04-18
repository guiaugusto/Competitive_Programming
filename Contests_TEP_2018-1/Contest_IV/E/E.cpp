#include <bits/stdc++.h>

#define debug(x) cout << #x << " = " << x << endl
#define fori(i, ini, lim) for(int i = int(ini); i < int(lim); i++)
#define ford(i, ini, lim) for(int i = int(ini); i >= int(lim); i--)

using namespace std;

typedef long long ll;
typedef long double ld;
typedef pair<int, int> ii;

const int N = 50500;
int p[N];
int num[N];
int arr[N];

void init() {
	fori(i, 0, N) {
		p[i] = i;
		num[i] = 0;
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
}
int main() {


	int tests;
	scanf("%d", &tests);
	fori(t, 0, tests) {
		int n, m;
		scanf("%d %d", &n, &m);

		init();

		fori(i, 0, n) {
			scanf("%d", &arr[i]);
		}

		fori(i, 0, m) {
			int a, b;
			scanf("%d %d", &a, &b);
			unionset(a, b);
		}

		bool ans = true;

		fori(i, 0, n) {
			int pi = findset(i);
			num[pi] += arr[i];
		}

		fori(i, 0, n) {
			int pi = findset(i);
			if(num[pi] != 0) {
				ans = false;
				break;
			}
		}
		puts(ans ? "POSSIBLE" : "IMPOSSIBLE");
	}

	return 0;
}
