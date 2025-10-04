// Last updated: 10/4/2025, 5:45:12 PM
int numberOfSteps(int num) {
    int count = 0;
    while (num != 0) {
        if (num % 2 == 0) {
            num = num / 2;
        } else {
            num = num - 1;
        }
        count++;
    }
    return count;
}
