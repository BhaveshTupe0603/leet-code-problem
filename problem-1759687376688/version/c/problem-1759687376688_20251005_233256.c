// Last updated: 10/5/2025, 11:32:56 PM
void moveZeroes(int* nums, int numsSize) {
    int J = 0;
    for (int i = 0; i < numsSize; i++) {
        if (nums[i] != 0) {
            int temp = nums[i];
            nums[i] = nums[J];
            nums[J++] = temp;
        }
    }
}