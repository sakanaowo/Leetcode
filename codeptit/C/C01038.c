#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007
#define MAX(A,B) ((A) > (B)) ?( A) : (B)
#define MIN(A,B) ((A) < (B)) ?( A) : (B)

void solve() {
    int n;
    scanf("%d", &n);
    int a = n, dem = 0;
    int dau, cuoi = n % 10;
    while (a > 0)
    {
        if (a < 10)
            dau = a;
        dem++;
        a /= 10;
    }
    n = n - cuoi - dau * pow(10, dem - 1) + dau + cuoi * pow(10, dem - 1);
    printf("%lld", n);
}

int main() {
    solve();
}
