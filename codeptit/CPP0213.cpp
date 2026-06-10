#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

bool iPS(ll x) {
    if (x < 0) return false;
    ll s = round(sqrt(x));
    return s * s == x;
}

bool iF(ll n) {
    if (n < 0) return false;
    return iPS(5 * n * n + 4) || iPS(5 * n * n - 4);
}

void solve() {
    int n;
    cin >> n;
    int a[n];
    for (auto &x: a) cin >> x;
    // sort(a, a + n);
    for (auto &x: a) if (iF(x)) cout << x << " ";
    cout << endl;
}

int main() {
    fast;
    __init__ solve();
}
