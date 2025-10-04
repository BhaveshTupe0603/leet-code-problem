# Last updated: 10/4/2025, 5:45:18 PM
class Solution(object):
    def subtractProductAndSum(self, n):
        """
        :type n: int
        :rtype: int
        """
        total_sum = 0
        product = 1
        
        while n != 0:
            digit = n % 10
            total_sum += digit
            product *= digit
            n //= 10
        
        return product - total_sum
