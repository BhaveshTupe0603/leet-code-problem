# Last updated: 10/4/2025, 5:44:48 PM
class Solution(object):
    def findDelayedArrivalTime(self, arrivalTime, delayedTime):
       return (arrivalTime+delayedTime)%24
        