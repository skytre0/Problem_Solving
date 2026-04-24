#include <bits/stdc++.h>
#define ll long long

using namespace std;

unsigned ll a, b;
unsigned ll arr[55];

unsigned ll solve(unsigned ll x) {
    unsigned ll xsum = (x & 1);
	for (int i = 53; i > 0; i--) {
        // 100010111011000001010 처럼 간격 두고 1 나오는 경우로 (x - ...) 을 계속해야 함
		if (x & (1ull << i)) {
			xsum += arr[i] + (x - (1ull << i) + 1);
			x -= (1ull << i);
		}
	}
    return xsum;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a >> b;
    // 2^53 < 10^16 < 2^54
    for (unsigned ll i = 0; i < 54; i++) {
        arr[i + 1] = arr[i] * 2 + (1ULL << i);
    }
    cout << solve(b) - solve(a-1);
    return 0;
}
