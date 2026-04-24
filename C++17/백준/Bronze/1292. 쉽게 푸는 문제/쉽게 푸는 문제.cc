#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
	int a, b, c, d;
	int m, n;
	cin >> m >> n;
	a = 0;
    c = 0;
    d = 0;
	b = 1;
	while (a+b <= n) {
		a += b;
		if (a >= m && c == 0) {
			d += (a-m+1)*b;
			m = a;
			c = 1;
		}
		else if (a > m) {
			d += (a-m)*b;
			m = a;
		}
		b += 1;
	}
	if (c == 0)
		d += (n-m+1)*b;
	else
		d += (n-m)*b;
	cout << d;
	return 0;
}