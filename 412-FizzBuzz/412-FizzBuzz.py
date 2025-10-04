# Last updated: 10/4/2025, 5:45:33 PM
class Solution(object):
    def fizzBuzz(self, n):
        return [
            "FizzBuzz" if i % 15 == 0 else
            "Fizz" if i % 3 == 0 else
            "Buzz" if i % 5 == 0 else
            str(i)
            for i in range(1, n + 1)
        ]
