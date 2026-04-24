#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
	stack<double> s;
	string ss;
	double arr[26];
	double cal[2];
	double a, b;
	cin >> a >> ss;
	for (size_t i = 0; i < a; i++) {
		cin >> arr[i];
	}
	for (size_t i = 0; i < ss.size(); i++) {
		a = ss[i] - 'A';
		if (a >= 0 && a < 26) {
			s.push(arr[int(a)]);
		}
		else {
			cal[1] = s.top();
			s.pop();
			cal[0] = s.top();
			s.pop();
			if (ss[i] == '+') {
				s.push(cal[0] + cal[1]);
			}
			else if (ss[i] == '-') {
				s.push(cal[0] - cal[1]);
			}
			else if (ss[i] == '*') {
				s.push(cal[0] * cal[1]);
			}
			else if (ss[i] == '/') {
				s.push(cal[0] / cal[1]);
			}
		}
	}
	cout << fixed << setprecision(2) << s.top();
    return 0;
}