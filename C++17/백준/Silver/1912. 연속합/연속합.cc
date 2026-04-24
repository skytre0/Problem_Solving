#include <algorithm>
#include <iostream>

using namespace std;


int main() {
	int a;
	int ma;
    int dp[100002] = {};
    int sp[100002] = {};
	cin >> a;
	cin >> dp[0];
	ma = dp[0];
	sp[0] = dp[0];
	for (size_t i = 1; i < a; i++) {
		cin >> dp[i];
		sp[i] = max(sp[i-1] + dp[i], dp[i]);
		ma = max(ma, sp[i]);
	}
	cout << ma;
	return 0;
}