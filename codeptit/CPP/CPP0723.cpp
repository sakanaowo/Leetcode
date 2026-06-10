#include <bits/stdc++.h>
using namespace std;
#define __init__ int t;cin>>t;while(t--)
#define ll long long

void solve() {
    int n;
    string s;
    cin >> n >> s;
    string res = "";
    for (char c: s) {
        if (c == '2') res += '2';
        else if (c == '3') res += '3';
        else if (c == '4') res += "322";
        else if (c == '5') res += '5';
        else if (c == '6') res += "53";
        else if (c == '7') res += '7';
        else if (c == '8') res += "7222";
        else if (c == '9') res += "7332";
    }
    sort(res.rbegin(), res.rend());
    cout << res << endl;
}

int main() {
    __init__ solve();
}
