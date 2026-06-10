#include <bits/stdc++.h>
using namespace std;

void dewy(vector<int> &a, bool &flag) {
    int i = a.size() - 1;
    while (i >= 0 && a[i] == 1) a[i--] = 0;
    if (i >= 0) a[i] = 1;
    else flag = false;
}

void solve() {
    int T;
    cin >> T;
    while (T--) {
        int n;
        bool flag = true;
        cin >> n;
        vector<int> a(n, 0);
        while (flag) {
            for (auto i: a) cout << i;
            cout << " ";
            dewy(a, flag);
        }
        cout << endl;
    }
}

int main() {
    solve();
}
