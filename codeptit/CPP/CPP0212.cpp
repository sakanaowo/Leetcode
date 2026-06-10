#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long
#define mod 1000000007

ll binpow(ll base,ll exp) {
    ll res = 1;
    while (exp) {
        if (exp & 1) res = (res % mod * base % mod) % mod;
        base = (base % mod * base % mod) % mod;
        exp >>= 1;
    }
    return res;
}

void solve() {
    int n, x;
    ll res = 0;
    cin >> n >> x;
    vector<ll> a(n);
    for (auto &i: a) cin >> i;
    for (int i = 0; i < n; i++) {
        if (a[i] != 0) {
            ll term = (a[i] * binpow(x, n - i - 1)) % mod;
            res = (res + term) % mod;
        }
    }
    cout << res << endl;
}

int main() {
    __init__ solve();
}
