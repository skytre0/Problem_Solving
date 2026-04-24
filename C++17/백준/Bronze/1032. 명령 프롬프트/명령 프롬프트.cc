#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	int n;
	cin >> n;
	string a[n];
	for (size_t i = 0; i < n; i++)
		cin >> a[i];
	for (size_t i = 0; i < a[0].length(); i++) {
		for (size_t j = 0; j < n; j++) {
			if (a[0][i] != a[j][i])
				a[0][i] = '?';
		}
	}
	for (size_t i = 0; i < a[0].length(); i++)
		cout << a[0][i];
	return 0;
}