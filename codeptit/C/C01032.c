#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007

void solve() {
    int n;
    int res = 1;
    scanf("%d", &n);
    for (int i = 2; i <= n; i++) {
        if (n % i == 0) {
            res *= i;
            while (n % i == 0) n /= i;
        }
    }
    res *= n;
    printf("%d\n", res);
}

int main() {
    __init__ solve();
}
