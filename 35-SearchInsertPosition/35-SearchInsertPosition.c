// Last updated: 25/03/2025, 21:27:27
int searchInsert(int* nums, int numsSize, int target) {
    
    int low = 0, high = numsSize-1;
    int ans = numsSize;

    while (low <= high) {
        int mid = low + (high - low)/2;
        if (nums[mid] >= target) {
            ans = mid;
            high = mid-1;
        } else {
            low = mid+1;
        }
    }

    return ans;

}