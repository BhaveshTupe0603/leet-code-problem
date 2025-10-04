# Last updated: 10/4/2025, 5:44:56 PM
class Solution(object):
    def passThePillow(self, n, time):
        """
        :type n: int
        :type time: int
        :rtype: int
        """
        cycle = n - 1
        full_cycles = time // cycle
        remainder = time % cycle

        if full_cycles % 2 == 0:
            return 1 + remainder  # moving forward
        else:
            return n - remainder  # moving backward
