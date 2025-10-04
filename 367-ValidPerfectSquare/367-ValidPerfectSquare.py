# Last updated: 10/4/2025, 5:45:43 PM
class Solution(object):
    def isPerfectSquare(self, n):
        if n < 0:
            return False
        if n == 0 or n == 1:
            return True

        start = 1
        end = n // 2

        while start <= end:
            mid = (start + end) // 2
            square = mid * mid

            if square == n:
                return True
            elif square < n:
                start = mid + 1
            else:
                end = mid - 1

        return False
