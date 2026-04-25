#include <bits/stdc++.h>
#define ll long long

using namespace std;

int a, b, c;
string s;
map<string, string> m = {{"Algorithm", "204"}, {"DataAnalysis", "207"}, {"ArtificialIntelligence", "302"}, 
                        {"CyberSecurity", "B101"}, {"Network", "303"}, {"Startup", "501"}, {"TestStrategy", "105"}};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    a = 0;
    while (getline(cin, s))    a++;
    cout << a;
    return 0;
}