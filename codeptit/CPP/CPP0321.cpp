#include <bits/stdc++.h>
using namespace std;
#define __init__ int tc;cin>>tc;while(tc--)
#define __inits__ int tc;cin>>tc;cin.ignore();while(tc--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};
int cnt = 0;

bool isSmaller(string a, string b) {
    int n1 = a.length(), n2 = b.length();
    if (n1 < n2) return true;
    if (n1 > n2) return false;
    return a < b;
}

string subtract(string a, string b) {
    bool isNegative = false;
    if (isSmaller(a, b)) {
        swap(a, b);
        isNegative = true;
    }
    string result = "";
    int n1 = a.length(), n2 = b.length();
    reverse(a.begin(), a.end());
    reverse(b.begin(), b.end());

    int borrow = 0;
    for (int i = 0; i < n1; i++) {
        int digit1 = a[i] - '0';
        int digit2 = (i < n2) ? b[i] - '0' : 0;
        int sub = digit1 - digit2 - borrow;
        if (sub < 0) {
            sub += 10;
            borrow = 1;
        } else borrow = 0;
        result.push_back('0' + sub);
    }
    reverse(result.begin(), result.end());
    int i = 0;
    while (i < result.length() - 1 && result[i] == '0') i++;
    result = result.substr(i);
    // if (isNegative) result = "-" + result;
    return result;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << subtract(a, b) << endl;
}

int main() {
    __init__ solve();
}
