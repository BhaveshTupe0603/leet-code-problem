# Last updated: 10/4/2025, 5:46:19 PM
class Solution(object):
    def twoSum(self, nums, target):
        num_map = {}  # number -> index

        for i, num in enumerate(nums):
            complement = target - num
            if complement in num_map:
                return [num_map[complement], i]
            num_map[num] = i

        return []  # This won't be reached since the problem guarantees one solution
