#include <stdio.h>

int main() {
    int a, b;
    scanf("%d%d", &a, &b);
    printf("%s" , a > b ? ">" : b > a ? "<" : "==");
    return 0;
}