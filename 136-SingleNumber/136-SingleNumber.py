# Last updated: 10/4/2025, 5:46:05 PM
class Solution(object):
    def singleNumber(self, nums):
        result = 0
        for num in nums:
            result ^= num
        return result
