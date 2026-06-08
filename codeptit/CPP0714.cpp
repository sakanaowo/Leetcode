#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)

void solve() {
    int n;
    cin >> n;
    vector<int> a(n);
    for (auto &x: a) cin >> x;
    prev_permutation(a.begin(), a.end());
    for (auto &x: a) cout << x << " ";
    cout << endl;
}

int main() {
    __init__ solve();
}
