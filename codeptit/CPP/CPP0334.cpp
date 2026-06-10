#include <bits/stdc++.h>
using namespace std;
#define __init__ int tc;cin>>tc;while(tc--)
#define __inits__ int tc;cin>>tc;cin.ignore();while(tc--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};


void solve() {
    string s;
    int t = 0;
    cin >> s;
    stringstream ss(s);
    for (auto &c: s)
        if (!isdigit(c)) c = ' ';
    cout << s << endl;
    while (ss >> s) {
        t += stoi(s);
    }
    cout << t << endl;
}

int main() {
    __init__ solve();
}
