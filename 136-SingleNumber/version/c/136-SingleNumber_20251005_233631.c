// Last updated: 10/5/2025, 11:36:31 PM
int findMaxConsecutiveOnes(int* nums, int numsSize) {
     int maxi=0,ma=0;
        for(int i=0;i<numsSize;i++){
            if(nums[i]==1)ma+=1;
            else ma=0;
            maxi=(maxi>ma)?maxi:ma;
        }
        return maxi;
}