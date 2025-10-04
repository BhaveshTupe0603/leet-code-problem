# Last updated: 10/4/2025, 5:45:21 PM
class Solution(object):
    def tribonacci(self, n):
        """
        :type n: int
        :rtype: int
        """
        # Contract: 0 <= n <= 37 (per LeetCode)
        if n == 0:
            return 0
        elif n == 1 or n == 2:
            return 1

        a, b, c = 0, 1, 1
        for _ in range(3, n + 1):
            a, b, c = b, c, a + b + c

        return c
