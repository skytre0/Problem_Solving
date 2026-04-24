#include <stdio.h>
#include <cmath>

using namespace std;

void cs(int a) {
    int b = pow(3, a-1);
    if (a == 0)
        printf("-");
    else {
        cs(a-1);
        for (size_t i = 0; i < b; i++)
            printf(" ");
        cs(a-1);
    }
}


int main () {
    int a;
    while (scanf("%d", &a) != EOF) {
        cs(a);
        printf("\n");
    }
    return 0;
}    