#include <iostream>
#include <string>

using namespace std;

int main() {
	int a, n, sum;
	string b;
	cin >> a;
	for (size_t i = 0; i < a; i++) {
		cin >> b;
		n = 0;
		sum = 0;
		for (size_t j = 0; j < b.length(); j++) {
			if (b[j] == 'O')
				n++;
			else
				n = 0;
			sum += n;
		}
		cout << sum << "\n";
	}
	return 0;	
}