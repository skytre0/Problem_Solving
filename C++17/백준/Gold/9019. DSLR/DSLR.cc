#include <queue>
#include <iostream>

using namespace std;

int arr[10005] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    queue<pair<int, string>> q;
    int a, b, c, d, e, f = 0;
    string s, ns;
    int p;
    cin >> a;
    for (size_t i = 0; i < a; i++) {
        cin >> b >> c;
        f = 0;
        fill_n(arr, 10005, 0);
        while (!q.empty())
            q.pop();
        q.push({b, ""});
        while (true) {
            d = q.size();
            for (size_t j = 0; j < d; j++) {
                e = q.front().first;
                ns = q.front().second;
                q.pop();
                p = (2 * e) % 10000;
                if (p == c) {
                    f++;
                    ns = ns + "D";
                    break;
                }
                else {
                    if (arr[p] == 0) {
                        arr[p] = 1;
                        q.push({p, ns + "D"});
                    }
                }
                e != 0 ? p = e - 1 : p = 9999;
                if (p == c) {
                    f++;
                    ns = ns + "S";
                    break;
                }
                else {
                    if (arr[p] == 0) {
                        arr[p] = 1;
                        q.push({p, ns + "S"});
                    }
                }
                p = (e/1000) + (e%1000) * 10;
                if (p == c) {
                    f++;
                    ns = ns + "L";
                    break;
                }
                else {
                    if (arr[p] == 0) {
                        arr[p] = 1;
                        q.push({p, ns + "L"});
                    }
                }
                p = (e%10) * 1000 + e/10;
                if (p == c) {
                    f++;
                    ns = ns + "R";
                    break;
                }
                else {
                    if (arr[p] == 0) {
                        arr[p] = 1;
                        q.push({p, ns + "R"});
                    }
                }
            }
            if (f > 0)
                break;
        }
        cout << ns << "\n";
    }
    return 0;
}