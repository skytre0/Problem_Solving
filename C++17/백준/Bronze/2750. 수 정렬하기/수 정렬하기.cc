#include <stdio.h>
#include <algorithm>

int main() {
    int n[1000] = {0};
    int a;
    scanf("%d", &a);
    for (size_t i=0; i < a; i++)
        scanf("%d", &n[i]);
    std::sort(n, n+a);
    
    for (size_t j=0; j < a; j++)
        printf("%d\n", n[j]);
    return 0;    
}