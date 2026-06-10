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
    int n, res = 0;
    scanf("%d", &n);
    while (n > 0) {
        n /= 10;
        res++;
    }
    printf("%d\n", res);
}

int main() {
    solve();
}
