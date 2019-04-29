#include <bits/stdc++.h>

using namespace std;

int main(){
	double x, r, y;
	int g, d;

	cin >> g >> d >> r;

	x = (100 * r) / (100 - d);
	y = (1000 * x) / g;

	printf("%.8lf\n", y);

	return 0;
}
