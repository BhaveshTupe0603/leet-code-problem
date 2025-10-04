# Last updated: 10/4/2025, 5:45:31 PM
class Solution(object):
    def fib(self, n):
        """
        :type n: int
        :rtype: int
        """
        # Contract: 0 <= n <= 30
        if n < 0 or n > 30:
            raise ValueError("Input must satisfy: 0 <= n <= 30")

        if n == 0:
            return 0
        elif n == 1:
            return 1

        a, b = 0, 1
        for _ in range(2, n + 1):
            a, b = b, a + b

        return b
