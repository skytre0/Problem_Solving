#include <iostream>

using namespace std;

int main() {
	long long int a, b, c;
	cin >> a >> b;
	if (a > b) {
		c = a;
		a = b;
		b = c;
	}
	if (a != b)
		b -= 1;
	printf("%lld\n", b-a);
	while (a < b) {
		printf("%lld ", a+1);
		a += 1;
	}
	return 0;
}