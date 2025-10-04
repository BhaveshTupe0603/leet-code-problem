# Last updated: 10/4/2025, 5:45:56 PM
class Solution(object):
    def isHappy(self, n):
        """
        :type n: int
        :rtype: bool
        """
        while True:
            total = 0
            while n != 0:
                digit = n % 10
                total += digit * digit
                n = n // 10

            if total == 1:
                return True
            elif total == 4:
                return False

            n = total
