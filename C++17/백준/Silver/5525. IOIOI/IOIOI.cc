#include <string>
#include <iostream>

using namespace std;

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    long long a, b, c, d = 0;
    string s;
    cin >> a >> b >> s;
    for (long long i = 0; i < s.size(); i++) {
        c = 0;
        if(s[i]=='I'){
            while(s[i + 1] == 'O' && s[i + 2] == 'I') {
                i += 2;
                c++;
                if(c == a){
                    c--;
                    d++;
                }
            }
        }
    }
    cout << d;
    return 0;
}