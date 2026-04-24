#include <bits/stdc++.h>

using namespace std;

int arr[500005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
	stack<int> s;
	int a;
	cin >> a;
	for (int i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for (int i = a - 1; i >= 0; i--) {
		if (s.empty())
			s.push(i);
		else {
			while (!s.empty() && arr[s.top()] <= arr[i]) {
				arr[s.top()] = i + 1;
				s.pop();
			}
			s.push(i);
		}
	}
	while (!s.empty()) {
		arr[s.top()] = 0;
		s.pop();
	}
	for (size_t i = 0; i < a; i++)
		cout << arr[i] << " ";
    return 0;
}