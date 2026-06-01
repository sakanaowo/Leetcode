#include <bits/stdc++.h>
using namespace std;

class Solution {
   public:
    string say(string n) {
        int c = 1;
        string ans = "";
        for (int i = 1; i < n.size(); i++) {
            if (n[i] == n[i - 1]) {
                c++;
            } else {
                ans += to_string(c) + n[i - 1];
                c = 1;
            }
        }
        ans += to_string(c) + n[n.size() - 1];
        return ans;
    }
    string countAndSay(int n) {
        string s = "1";

        for (int i = 1; i < n; i++) {
            s = say(s);
        }

        return s;
    }
};