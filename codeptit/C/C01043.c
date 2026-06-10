#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007
#define MAX(A,B) ((A) > (B)) ?( A) : (B)
#define MIN(A,B) ((A) < (B)) ?( A) : (B)

long long fact(int n) {
    long long res = 1;
    for (int i = 2; i <= n; i++) {
        res *= i;
    }
    return res;
}

void solve() {
    int n, a, res = 0;
    scanf("%d", &n);
    a = n;
    while (n) {
        res += fact(n % 10);
        n /= 10;
    }
    printf((a == res) ? "1" : "0");
}

int main() {
    solve();
}
