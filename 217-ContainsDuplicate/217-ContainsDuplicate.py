# Last updated: 10/4/2025, 5:45:55 PM
class Solution(object):
    def containsDuplicate(self, nums):
        seen = set()
        for num in nums:
            if num in seen:  # duplicate found
                return True
            seen.add(num)
        return False


        