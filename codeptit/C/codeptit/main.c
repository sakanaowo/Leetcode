#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007
#define MAX(A,B) ((A) > (B)) ?( A) : (B)
#define MIN(A,B) ((A) < (B)) ?( A) : (B)

long long fi[10001];

void fi_(void) {
    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i < 10001; i++)
        fi[i] = fi[i-1] + fi[i-2];
}

void solve() {
    int n;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
        printf("%lld ", fi[i]);
}

int main() {
    fi_();
    solve();
}
