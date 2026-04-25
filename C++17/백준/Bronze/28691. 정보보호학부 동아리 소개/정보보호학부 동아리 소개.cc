#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b;
map<char, string> m = {{'M',"MatKor"}, {'W',"WiCys"}, {'C',"CyKor"}, {'A',"AlKor"}, {'$',"$clear"}};
char c;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    cin >> c;
    cout << m[c];
    return 0;
}