#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int cnt = 0;

void solve() {
    int n;
    cin >> n;
    vector<vector<ll> > grid(n, vector<ll>(n));
    for (auto &i: grid)
        for (auto &j: i) cin >> j;
    vector<ll> rs(n, 0), cs(n, 0);
    ll total = 0, S = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            rs[i] += grid[i][j];
            cs[j] += grid[i][j];
            total += grid[i][j];
        }
    }
    for (auto &i: rs) S = max(S, i);
    for (auto &i: cs) S = max(S, i);
    cout << (ll) n * S - total << endl;
}

int main() {
    __init__ solve();
}
