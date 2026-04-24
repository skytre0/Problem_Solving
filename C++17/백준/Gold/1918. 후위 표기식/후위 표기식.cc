#include <bits/stdc++.h>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
	stack<char> s;
	string ss;
	int state = 0;
	cin >> ss;
	for (size_t i = 0; i < ss.size(); i++) {
		if (ss[i] != '+' && ss[i] != '-' && ss[i] != '*' && ss[i] != '/' && ss[i] != '(' && ss[i] != ')')
			cout << ss[i];
		else if (ss[i] == '+') {
			while (!s.empty() && s.top() != '(') {
				cout << s.top();
				s.pop();
			}
			s.push(ss[i]);
		}
		else if (ss[i] == '-') {
			while (!s.empty() && s.top() != '(') {
				cout << s.top();
				s.pop();
			}
			s.push(ss[i]);
		}
		else if (ss[i] == '*') {
			while (!s.empty() && s.top() != '(' && s.top() != '+' && s.top() != '-') {
				cout << s.top();
				s.pop();
			}
			s.push(ss[i]);
		}
		else if (ss[i] == '/') {
			while (!s.empty() && s.top() != '(' && s.top() != '+' && s.top() != '-') {
				cout << s.top();
				s.pop();
			}
			s.push(ss[i]);			
		}
		else if (ss[i] == '(') {
			s.push(ss[i]);			
		}
		else if (ss[i] == ')') {
			while (!s.empty() && s.top() != '(') {
				cout << s.top();
				s.pop();
			}
			if (!s.empty())
				s.pop();			
		}
	}
	while (!s.empty()) {
		cout << s.top();
		s.pop();
	}
    return 0;
}