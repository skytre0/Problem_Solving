#include <algorithm>
#include <iostream>

using namespace std;

int dp[1000002] = {};

int main() {
	int a, x, y, z;
	cin >> a;
	dp[0] = -1;
	for (size_t i = 1; i <= a; i++) {
		x = dp[i-1] + 1;
		if (i % 3 == 0) 
			y = dp[i/3] + 1;
		else {
			y = x;
		}
		if (i % 2 == 0)
			z = dp[i/2] + 1;
		else {
			z = x;
		}
		dp[i] = min({x, y, z});
	}
	cout << dp[a];
	return 0;
}