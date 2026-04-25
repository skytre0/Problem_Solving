#include <iostream>

using namespace std;

void merge_f(int* A, int p, int q, int r, int* b) {
    int i = p;
    int j = q+1;
    int t = 0;
    int tmp[r+1];
    while (i <= q && j <= r) {
        if (A[i] <= A[j]) {
            tmp[t++] = A[i++];
        }
        else {
            tmp[t++] = A[j++];
        }
    }

    while (i <= q)
        tmp[t++] = A[i++];
    while (j <= r)
        tmp[t++] = A[j++];

    i = p; 
    t = 0;
    while (i <= r) {
        A[i++] = tmp[t++];
        *b -= 1;
        if (*b == 0)
            cout << A[i-1];
        }
}

void merge_sort(int* A, int p, int r, int* b) {
    if (p < r) {
        int q = (p + r) / 2;
        merge_sort(A, p, q, b);
        merge_sort(A, q + 1, r, b);
        merge_f(A, p, q, r, b);
    }
}


int main () {
    int a, b;
    int A[500000];
    cin >> a >> b;
    for (size_t i = 0; i < a; i++)
        cin >> A[i];
    merge_sort(A, 0, a-1, &b);
    if (b > 0)
        cout << -1;
    return 0;
}