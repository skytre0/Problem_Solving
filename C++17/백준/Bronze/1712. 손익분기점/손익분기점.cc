#include <iostream>

using namespace std;

int main () {
    int a, b, c;
    scanf("%d%d%d", &a, &b, &c);
    if (b >= c)
        printf("-1");
    else {
        a = (a/(c-b) + 1);
        printf("%d", a);
    }
    return 0;
}   