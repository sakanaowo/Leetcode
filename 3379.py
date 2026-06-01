from typing import List


class Solution:
    def constructTransformedArray(self, nums: List[int]) -> List[int]:
        result = [0] * len(nums)
        for i in range(len(nums)):
            if nums[i] > 0:
                result[i] = nums[(i + nums[i]) % len(nums)]
            elif nums[i] < 0:
                result[i] = nums[(i - abs(nums[i])) % len(nums)]
            else:
                result[i] = nums[i]
        return result


if __name__ == "__main__":
    s = Solution()
    print(s.constructTransformedArray([3, -2, 1, 1]))
    print(s.constructTransformedArray([-1, -1, 4]))
