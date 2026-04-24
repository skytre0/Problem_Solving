#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

double dist;
int n, xa, ya, ra, xb, yb, rb;

int main() {
    cin.tie(0);
    ios::sync_with_stdio;
    cin >> n;
    while (n--) {
        cin >> xa >> ya >> ra >> xb >> yb >> rb;
        if (xa == xb && ya == yb && ra == rb)   cout << -1 << "\n";
        else {
            if (xa == xb)   dist = abs(ya - yb);
            else if (ya == yb)   dist = abs(xa - xb);
            else dist = sqrt(pow(abs(ya - yb), 2) + pow(abs(xa - xb), 2));

            if (dist < (double)max(ra, rb)) {
                if ((double)max(ra, rb) > dist + (double)min(ra, rb)) cout << 0 << "\n";
                else if ((double)max(ra, rb) < dist + (double)min(ra, rb))  cout << 2 << "\n";
                else    cout << 1 << "\n";

            }
            else if (dist > (double)max(ra, rb)) {
                if (dist > (double)(ra + rb)) cout << 0 << "\n";
                else if (dist < (double)(ra + rb))  cout << 2 << "\n";
                else    cout << 1 << "\n";
            }
            else cout << 2 << "\n";


        }
    }
    return 0;
}