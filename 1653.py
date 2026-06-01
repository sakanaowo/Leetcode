class Solution:
    def minimumDeletions(self, s: str) -> int:
        count_a = s.count("a")
        count_b = 0
        ans = count_a
        for c in s:
            if c == "a":
                count_a -= 1
            else:
                count_b += 1
            ans = min(ans, count_a + count_b)
        return ans


if __name__ == "__main__":
    print(Solution().minimumDeletions("aababbab"))  # Output: 2
    print(Solution().minimumDeletions("bbaaaaabb"))  # Output: 2
