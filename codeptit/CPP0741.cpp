#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long

void solve() {
    ll x, y, p, res = 1;
    cin >> x >> y >> p;
    x %= p;
    while (y > 0) {
        if (y & 1) res = (res * x) % p;
        x = (x * x) % p;
        y >>= 1;
    }
    cout << res << endl;
}

int main() {
    __init__ solve();
}
