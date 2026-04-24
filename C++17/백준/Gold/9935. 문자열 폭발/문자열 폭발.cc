#include <bits/stdc++.h>

using namespace std;

pair<char, int> arr[1000005];

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    string s1, s2;
    arr[0] = {' ', 0};
    int a = 1;
    cin >> s1 >> s2;
    for (size_t i = 0; i < s1.length(); i++) {
        arr[a].first = s1[i];
        if (s1[i] == s2[arr[a-1].second]) {
            arr[a].second = arr[a-1].second + 1;
            if (arr[a].second == s2.length())
                a = a - s2.length() + 1;
            else
                a++;
        }
        else {
            if (s1[i] == s2[0])
                arr[a].second = 1;
            else
                arr[a].second = 0;
            a++;
        }
    }
    if (a == 1)
        cout << "FRULA";
    else {
        for (size_t j = 1; j < a; j++) {
            cout << arr[j].first;
        }
    }
    return 0;
}