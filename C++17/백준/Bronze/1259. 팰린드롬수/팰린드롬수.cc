#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <string>

using namespace std;


int main() {
	string a;
	int b, c;
	while (cin >> a && a != "0") {
		b = a.length()/2;
		c = 0;
		if (a.length()%2 == 1) {
			for (size_t i = 0; i < b; i++) {
				if (a[b-1-i] != a[b+1+i]) {
					printf("no\n");
					c = 1;
					break;
				}
			}
		}
		else {
			for (size_t i = 0; i < b; i++) {
				if (a[b+i] != a[b-1-i]) {
					printf("no\n");
					c = 1;
					break;
				}
			}
		}
		if (c == 0)
			printf("yes\n");
	}
	return 0;
}