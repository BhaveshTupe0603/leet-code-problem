# Last updated: 10/4/2025, 5:45:15 PM
class Solution(object):
    def numberOfSteps(self, num):
        """
        :type num: int
        :rtype: int
        """
        count = 0
        while num != 0:
            if num % 2 == 0:
                num = num // 2   # Use integer division
            else:
                num = num - 1
            count += 1
        return count
