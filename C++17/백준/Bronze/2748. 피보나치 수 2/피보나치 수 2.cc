#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;


int main() {
	long long int a, b, n;
	cin >> n;
	a = 1;
	b = 1;
	if (n <= 2) {
		cout << 1;
		return 0;
		}
	for (size_t i = 0; i < n-2; i++) {
		if (i % 2 == 0)
			a = a + b;
		else
			b = a + b;
	}
	if (n % 2 == 1)
		cout << a;
	else
		cout << b;
	return 0;
}