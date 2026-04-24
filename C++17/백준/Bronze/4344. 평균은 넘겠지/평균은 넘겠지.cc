#include <iostream>
#include <vector>
#include <numeric>

using namespace std;

int main() {
	float a, b, c, n;
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> a;
		c = 0;
		vector<int> k(a);
		for (size_t j = 0; j < a; j++) {
			cin >> k[j];
		}
		b = accumulate(k.begin(), k.end(), 0)/a;
		for (size_t j = 0; j < a; j++) {
			if (k[j] > b) 
				c += 1;
		}
		printf("%0.3f%\n", c/a*100);
	}
}