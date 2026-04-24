#include <iostream>

using namespace std;

pair<char, char> arr[27];

int solve1(int a) {
    cout << (char)(a+'A');
    if (arr[a].first != '.')
        solve1(arr[a].first-'A');
    if (arr[a].second != '.')
        solve1(arr[a].second-'A');
    return 0;
}

int solve2(int a) {
    if (arr[a].first != '.')
        solve2(arr[a].first-'A');
    cout << (char)(a+'A');
    if (arr[a].second != '.')
        solve2(arr[a].second-'A');
    return 0;
}

int solve3(int a) {
    if (arr[a].first != '.')
        solve3(arr[a].first-'A');
    if (arr[a].second != '.')
        solve3(arr[a].second-'A');
    cout << (char)(a+'A');
    return 0;
}

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a;
    char b, c, d;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b >> c >> d;
        arr[b-'A'].first = c;
        arr[b-'A'].second = d;
    }
    solve1(0);
    cout << "\n";
    solve2(0);
    cout << "\n";
    solve3(0);
    return 0;
}