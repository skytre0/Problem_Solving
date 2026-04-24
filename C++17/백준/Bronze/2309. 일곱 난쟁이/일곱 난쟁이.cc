#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
	int a, b;
	b = 0;
	vector<int> k(9);
	for (size_t i = 0; i < 9; i++) {
		cin >> k[i];
	}
	sort(k.begin(), k.end());
	a = accumulate(k.begin(), k.end(), 0);
	for (size_t i = 0; i < 9; i++) {
		for (size_t j = i+1; j < 9; j++) {
			if (a - k[i] - k[j] == 100) {
				for (size_t n = 0; n < 9; n++) {
					if (n != i && n != j)
						cout << k[n] << "\n";
				}
				b = 1;
				break;
			}
		}
		if (b == 1)
			break;
	}
	return 0;
}