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
    int a, b;
    scanf("%d%d", &a, &b);
    int m = MAX(a, b), n = MIN(a, b);
    printf("%d", (m - n + 1) * (m + n) / 2);
}

int main() {
    solve();
}
