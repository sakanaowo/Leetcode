#include <bits/stdc++.h>
using namespace std;
#define __init__ int tc;cin>>tc;while(tc--)
#define __inits__ int tc;cin>>tc;cin.ignore();while(tc--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

ll reducer(string s,ll c) {
    ll res = 0;
    for (char c: s)res = (res * 10 + c - '0') % mod;
    return res;
}

ll powermod(string a, ll b, ll c) {
    ll base = reducer(a, c), res = 1;
    base %= c;
    while (b > 0) {
        if (b & 1) res = res * base % c;
        base = base % c * base % c;
        b >>= 1;
    }
    return res;
}

void solve() {
    string a;
    ll b, c;
    cin >> a >> b >> c;
    cout << powermod(a, b, c) << endl;
}

int main() {
    __init__ solve();
}
