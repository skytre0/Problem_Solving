#include <bits/stdc++.h>
#define ll long long

using namespace std;

ll a, b, sum = 0;
vector<ll> v1;
vector<ll> v2;
vector<ll> vv;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        v1.push_back(b);
    }
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b;
        v2.push_back(b);
    }
    vector<ll>::iterator i1 = v1.begin();
    vector<ll>::iterator i2 = v2.begin();
    while (*max_element(i1, v1.end()) != 0 && *max_element(i2, v2.end()) != 0) {
        if (*max_element(i1, v1.end()) > *max_element(i2, v2.end())) {
            *max_element(i1, v1.end()) = 0;
        }
        else if ((*max_element(i1, v1.end()) < *max_element(i2, v2.end()))) {
            *max_element(i2, v2.end()) = 0;
        }
        else {
            i1 = max_element(i1, v1.end());
            i2 = max_element(i2, v2.end());
            vv.push_back(*i1);
            i1++;
            i2++;
            sum++;
        }
    }
    cout << sum << "\n";
    for (size_t i = 0; i < vv.size(); i++) {
        cout << vv[i] << " ";
    }
    return 0;
}