#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>

using namespace std;

int main() {
	const char* date[] = {"SUN", "MON", "TUE", "WED", "THU", "FRI", "SAT"};
	pair<int, int> day;
	int a = 1;
	cin >> day.first >> day.second;
	while (day.first > a) {
		if (a == 1 || a == 3 || a == 5 || a == 7 || a == 8 || a == 10 || a == 12)
			day.second += 31;
		else if (a == 2)
			day.second += 28;
		else
			day.second += 30;
		a += 1;
	}
	cout << date[(day.second)%7];
	return 0;
}