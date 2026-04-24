#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
	pair<int, int> a;
	int n;
	cin >> n;
	pair<int, int> sec[n];
	vector<int> k(n, 1);
	for (size_t i = 0; i < n; i++) {
		cin >> a.first >> a.second;
		sec[i].first = a.first;
		sec[i].second = a.second;
	}
	for (size_t i = 0; i < n; i++) {
		for (size_t j = 0; j < n; j++) {
			if (sec[i].first < sec[j].first && sec[i].second < sec[j].second)
				k[i] += 1;
		}
	}
	for (size_t i = 0; i < n; i++)
		cout << k[i] << " ";
	return 0;
}