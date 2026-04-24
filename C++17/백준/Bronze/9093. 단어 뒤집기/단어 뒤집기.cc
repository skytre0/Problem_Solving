#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
#include <cstring>

using namespace std;


int main() {
	int m, n;
	char a;
	char b[20];
	cin >> n;
	cin.ignore();
	for (size_t i = 0; i < n; i++) {
		m = 0;
		while(scanf("%c", &a)) {
			if (a != ' ' && a != '\n') {
				b[m] = a;
				m += 1;
			}
			else {
				for (int j = m-1; j >= 0; j--) {
					cout << b[j];
				}
				m = 0;
				cout << " ";
			}
			if (a == '\n') {
				printf("\n");
				m = 0;
				break;
			}
		}
	}
	return 0;
}