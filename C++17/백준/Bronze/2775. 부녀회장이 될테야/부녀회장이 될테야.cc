#include <iostream>

using namespace std;

int re(int a, int b) {
	if (a == 0)
		return b;
	if (b == 1)
		return 1;
	else
		return re(a-1, b) + re(a, b-1);
}

int main() {
	int a, b, n;
	cin >> n;
	for (size_t i = 0; i < n; i++) {
		cin >> a >> b;
		printf("%d\n", re(a, b));
	}
	return 0;
}