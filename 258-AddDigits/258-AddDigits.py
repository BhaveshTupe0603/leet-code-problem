# Last updated: 10/4/2025, 5:45:53 PM
class Solution(object):
    def addDigits(self, num):
        """
        :type num: int
        :rtype: int
        """
        if num == 0:
            return 0
        return 1 + (num - 1) % 9
