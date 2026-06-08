#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long

void solve() {
    string s;
    cin >> s;
    for (auto w: views::split(s, " ")) {
        cout << w << endl; 
    }
}

int main() {
    __init__ solve();
}
