# Last updated: 10/4/2025, 5:45:06 PM
class Solution(object):
    def isSameAfterReversals(self, num):
        if (num%10!=0):
            return True
        elif (num==0):
            return True
        else:
            return False
        