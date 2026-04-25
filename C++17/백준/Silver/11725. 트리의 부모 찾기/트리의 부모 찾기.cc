#include <queue>
#include <vector>
#include <iostream>

using namespace std;

vector<int> v[100010];
queue<int> q;
int arr[100010] = {0};

int main() {
    cin.tie(NULL);
    ios::sync_with_stdio(false);
    int a, b, c, d;
    cin >> a;
    for (size_t i = 0; i < a-1; i++) {
        cin >> b >> c;
        v[b].push_back(c);
        v[c].push_back(b);
    }
    q.push(1);
    arr[1] = 1;
    while (!q.empty()) {
        b = q.size();
        for (size_t i = 0; i < b; i++) {
            c = q.front();
            q.pop();
            for (size_t j = 0; j < v[c].size(); j++) {
                d = v[c][j];
                if (arr[d] == 0) {
                    arr[d] = c;
                    q.push(d);
                }
            }

        }
    }
    for (size_t i = 2; i <= a; i++)
        cout << arr[i] << "\n";
    return 0;
}