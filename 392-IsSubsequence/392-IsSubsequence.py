# Last updated: 10/4/2025, 5:45:34 PM
class Solution(object):
    def isSubsequence(self, s, t):
        """
        :type s: str
        :type t: str
        :rtype: bool
        """
        i = 0  # pointer for s
        for char in t:
            if i < len(s) and s[i] == char:
                i += 1
        return i == len(s)
