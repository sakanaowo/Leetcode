class Solution:
    def countBinarySubstrings(self, s: str) -> int:
        group = [1]
        for i in range(1, len(s)):
            if s[i] == s[i - 1]:
                group[-1] += 1
            else:
                group.append(1)
        ans = 0
        for i in range(1, len(group)):
            ans += min(group[i - 1], group[i])
        return ans


if __name__ == "__main__":
    print(Solution().countBinarySubstrings("00110011"))  # Output: 6
    print(Solution().countBinarySubstrings("10101"))  # Output: 4
