#include <iostream>
#include <algorithm>

int main(){
	using namespace std;
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int n;
	pair <int,int> a[100000];
	cin >> n;
	for(size_t i = 0; i < n; i++) 
		cin >> a[i].first >> a[i].second;
	sort(a, a+n);
	for (size_t i = 0; i < n; i++)
		cout << a[i].first << " " << a[i].second << '\n';
	return 0;
}