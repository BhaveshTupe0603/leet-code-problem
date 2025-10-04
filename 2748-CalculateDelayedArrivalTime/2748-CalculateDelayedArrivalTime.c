// Last updated: 10/4/2025, 5:44:54 PM
int findDelayedArrivalTime(int arrivalTime, int delayedTime) {
    return (arrivalTime+delayedTime)%24;
}