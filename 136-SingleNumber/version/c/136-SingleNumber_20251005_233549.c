// Last updated: 10/5/2025, 11:35:49 PM
int findMaxConsecutiveOnes(int* nums, int numsSize) {
    int max = 0, cur = 0;
    for (int i = 0; i < numsSize; i++) {
        cur = nums[i] ? cur + 1 : 0;
        if (cur > max) max = cur;
    }
    return max;
}
