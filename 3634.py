from typing import List


class Solution:
    def minRemoval(self, nums: List[int], k: int) -> int:
        nums.sort()
        n = len(nums)
        right = 0
        ans = n
        for left in range(n):
            while right < n and nums[right] <= nums[left] * k:
                right += 1
            ans = min(ans, n - (right - left))
        return ans


if __name__ == "__main__":
    print(Solution().minRemoval([1, 6, 2, 9], 3))  # Output: 2
    print(Solution().minRemoval([1, 2, 5], 2))  # Output: 2
    print(Solution().minRemoval([4, 6], 2))  # Output: 2
