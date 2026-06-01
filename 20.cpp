#include <bits/stdc++.h>
using namespace std;
class Solution {
   public:
    bool isValid(string s) {
        stack<char> st;
        for (char c : s) {
            if (c == '(' || c == '[' || c == '{') {
                st.push(c);
            } else {
                if (st.empty()) return false;

                if (c == ')' && st.top() != '(') return false;
                if (c == ']' && st.top() != '[') return false;
                if (c == '}' && st.top() != '{') return false;

                st.pop();
            }
        }
        return (st.empty() == true) ? true : false;
    }
};

int main() {
    Solution solution;
    cout << (solution.isValid("(]") ? "true" : "false") << endl;
    cout << (solution.isValid("()") ? "true" : "false") << endl;
    cout << (solution.isValid("()[]{}") ? "true" : "false") << endl;
    cout << (solution.isValid("([)]") ? "true" : "false") << endl;
    cout << (solution.isValid("{[]}") ? "true" : "false") << endl;
    return 0;
}