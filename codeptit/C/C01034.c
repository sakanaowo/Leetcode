#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007

void solve() {
    int a, b;
    scanf("%d%d", &a, &b);
    int m = ceil(sqrt(a));
    int n = floor(sqrt(b));
    printf("%d\n", n - m + 1);
    for (int i = m; i <= n; i++) {
        printf("%d\n", i * i);
    }
}

int main() {
    solve();
}
