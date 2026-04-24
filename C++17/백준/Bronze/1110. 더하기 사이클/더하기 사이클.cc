#include <iostream>

using namespace std;

int main() {
	int a, b, c, d, n;
	cin >> a;
	n = 1;
	b = a%10;
	c = a/10 + a%10;
	d = a;
	while ((b*10 + c%10) != a) {
		d = (b*10 + c%10);
		b = d%10;
		c = d/10 + d%10;
		n += 1;
	}
	cout << n;
	return 0;
}