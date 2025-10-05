// Last updated: 10/5/2025, 11:47:27 PM
int findNumbers(int* nums, int numsSize) {
    int count = 0;
    for (int i = 0; i < numsSize; i++) {
        int digits = 0, n = nums[i];
        while (n) {
            n /= 10;
            digits++;
        }
        if (digits % 2 == 0) count++;
    }
    return count;
}
