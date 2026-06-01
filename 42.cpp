#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    int trap(vector<int> &height) {
        int start = 0, end = height.size() - 1;
        int leftMax = 0, rightMax = 0;
        int total = 0;

        while (start <= end) {
            leftMax = max(leftMax, height[start]);
            rightMax = max(rightMax, height[end]);
            if (leftMax < rightMax) {
                total += leftMax - height[start++];
                start++;
            } else {
                total += rightMax - height[end--];
            }
        }
        return total;
    }
};

int main() {
    Solution s;
    vector<int> height{0, 1, 0, 2, 1, 0, 1, 3, 2, 1, 2, 1};
    cout << s.trap(height) << endl;
}
