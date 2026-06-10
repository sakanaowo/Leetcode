#include <bits/stdc++.h>
using namespace std;
#define __init__ int tc;cin>>tc;while(tc--)
#define __inits__ int tc;cin>>tc;cin.ignore();while(tc--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

ll modulo(string num,ll m) {
    ll res = 0;
    for (char c: num) {
        res = (res * 10 + c - '0') % m;
    }
    return res;
}

void solve() {
    string a;
    ll b;
    cin >> a >> b;
    cout << modulo(a, b) << endl;
}

int main() {
    __init__ solve();
}
