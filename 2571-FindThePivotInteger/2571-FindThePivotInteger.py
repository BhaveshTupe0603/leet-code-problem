# Last updated: 10/4/2025, 5:44:50 PM
import math

class Solution:
    def pivotInteger(self, n):
        total = n * (n + 1) // 2
        x = int(math.sqrt(total))

        if x * x == total:
            return x
        else:
            return -1
