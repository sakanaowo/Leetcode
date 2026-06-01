from typing import List


class Solution:
    def longestBalanced(self, nums: List[int]) -> int:
        max_len = 0
        for i in range(len(nums)):
            odd = {}
            even = {}

            for j in range(i, len(nums)):
                if nums[j] & 1:
                    odd[nums[j]] = odd.get(nums[j], 0) + 1
                else:
                    even[nums[j]] = even.get(nums[j], 0) + 1

                if len(odd) == len(even):
                    max_len = max(max_len, j - i + 1)
        return max_len


if __name__ == "__main__":
    print(Solution().longestBalanced([1, 2, 3, 4]))  # Output: 4
    print(Solution().longestBalanced([1, 1, 1, 1]))  # Output: 0
    print(Solution().longestBalanced([2, 2, 2, 2]))  # Output: 0
    print(Solution().longestBalanced([3, 2, 2, 5, 4, 6, 7, 8, 9]))  # Output:
