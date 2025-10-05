// Last updated: 10/5/2025, 11:53:49 PM
int missingNumber(int* nums, int numsSize) {
    int total = numsSize * (numsSize + 1) / 2;
    int sum = 0;
    for (int i = 0; i < numsSize; i++) {
        sum += nums[i];
    }
    return total - sum;
}
