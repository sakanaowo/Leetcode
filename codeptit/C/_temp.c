#include <ctype.h>
#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include <stdbool.h>
#include <string.h>


#define __init__ int tc;scanf("%d",&tc); while(tc--)
#define _init_ int tc;scanf("%d",&tc);getchar(); while(tc--)
#define MAXN 10000000
#define MAX(A,B) ((A) > (B)) ?( A) : (B)
#define MIN(A,B) ((A) < (B)) ?( A) : (B)
#define ll long long
#define swap(a,b) do{__typeof__(a) temp=a;a=b;b=temp;}while(0)

long long fi[93];
bool prime[MAXN + 1];

void _fi_(void) {
    fi[0] = 0;
    fi[1] = 1;
    for (int i = 2; i < 93; i++)
        fi[i] = fi[i - 1] + fi[i - 2];
}

void read() {
    freopen("input.txt", "r", stdin);
}

ll GCD(ll a,ll b) {
    while (b != 0) {
        ll t = a % b;
        a = b;
        b = t;
    }
    return a;
}

ll LCM(ll a,ll b) {
    return (a / GCD(a, b)) * b;
}

void sieve() {
    for (int i = 0; i <= MAXN; i++) prime[i] = true;
    prime[0] = prime[1] = false;
    for (int i = 2; i * i <= MAXN; i++) {
        if (prime[i]) {
            for (int j = i * i; j <= MAXN; j += i) prime[j] = false;
        }
    }
}

ll fact(int n) {
    if (n == 1 || n == 0) return 1;
    return n * fact(n - 1);
}

ll binpow(ll base, int exp) {
    ll result = 1;
    while (exp > 0) {
        if (exp & 1) result *= base;
        base *= base;
        exp >>= 1;
    }
    return result;
}

bool isPrime(int n) {
    if (n <= MAXN) return prime[n];
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

// 11 12 .. 89 99
// void gen(ll current, int last, int cnt, int n) {
//     if (cnt == n) {
//         printf("%lld ", current);
//         return;
//     }
//     int start = (cnt == 0) ? 1 : last;
//     for (int i = start; i <= 9; i++) gen(current * 10 + i, i, cnt+1, n);
// }

int partition(int a[], int left, int right) {
    int pivot = a[right];
    int i = left - 1;

    for (int j = left; j < right; j++) {
        if (a[j] <= pivot) {
            i++;
            swap(a[i], a[j]);
        }
    }

    swap(a[i + 1], a[right]);
    return i + 1;
}

void quickSort(int a[], int left, int right) {
    if (left < right) {
        int p = partition(a, left, right);

        quickSort(a, left, p - 1);
        quickSort(a, p + 1, right);
    }
}


void toLower(char s[]) {
    for (int i = 0; s[i] != '\0'; i++) {
        s[i] = tolower(s[i]);
    }
}

bool palindrome(char s[]) {
    int len = strlen(s);
    for (int i = 0; i < len / 2; i++) {
        if (s[i] != s[len - i - 1]) return false;
    }
    return true;
}

void solve() {
    char a[50];
    scanf("%s", a);
    if (!(a[0]))
    if (palindrome(a)) {}
    printf("\n");
}

int main() {
    // sieve();
    // _fi_();
    read();
    _init_ solve();
}
