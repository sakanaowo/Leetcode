#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    string trim(const std::string &str) {
        size_t first = str.find_first_not_of(" \t\n\r");
        if (first == std::string::npos) return "";
        size_t last = str.find_last_not_of(" \t\n\r");
        return str.substr(first, (last - first + 1));
    }

    int lengthOfLastWord(string s) {
        s = trim(s);
        reverse(s.begin(), s.end());
        for (int i = 0; i < s.length(); i++) {
            if (s[i] == ' ') return i;
        }
        return s.length();
    }
};
