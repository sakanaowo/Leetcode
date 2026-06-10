#include <bits/stdc++.h>
using namespace std;
#define __init__ int tc;cin>>tc;while(tc--)
#define __inits__ int tc;cin>>tc;cin.ignore();while(tc--)
#define ll long long
#define mod 1000000007
#define fast ios_base::sync_with_stdio(false); cin.tie(NULL);

int dx[] = {-1, -1, -1, 0, 0, 1, 1, 1};
int dy[] = {-1, 0, 1, -1, 1, -1, 0, 1};

string addBigInt(string num1, string num2) {
    string result = "";
    int i = num1.length() - 1;
    int j = num2.length() - 1;
    int carry = 0;

    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;
        if (i >= 0) sum += num1[i--] - '0';
        if (j >= 0) sum += num2[j--] - '0';

        carry = sum / 10;
        result.push_back(sum % 10 + '0');
    }

    reverse(result.begin(), result.end());
    return result;
}

void solve() {
    string a, b;
    cin >> a >> b;
    cout << addBigInt(a, b) << endl;
}

int main() {
    __init__ solve();
}
