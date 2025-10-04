# Last updated: 10/4/2025, 5:46:13 PM
class Solution:
    def climbStairs(self, n):
        if n <= 3:
            return n

        prev1 = 3  # ways to climb 3 stairs
        prev2 = 2  # ways to climb 2 stairs

        for _ in range(4, n + 1):
            cur = prev1 + prev2
            prev2 = prev1
            prev1 = cur

        return prev1
