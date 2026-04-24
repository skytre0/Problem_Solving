#include <iostream>
#include <numeric>

using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	printf("%d\n", gcd(a, b));
	printf("%d", lcm(a, b));
    return 0;
}