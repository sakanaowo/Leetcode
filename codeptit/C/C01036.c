#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define MAXN 10000007

void solve() {
    char s[50];
    int n = 1;
    scanf("%s", s);
    for (int i = 0; s[i] != '\0'; i++) {
        n *= (s[i] - '0');
    }
    printf("%d\n", n);
}

int main() {
    solve();
}
