int singleNonDuplicate(int* nums, int numsSize) {
    
    if (numsSize == 1) return nums[0];
    if (nums[0] != nums[1]) return nums[0];
    if (nums[numsSize-1] != nums[numsSize-2]) return nums[numsSize-1];

    int low = 1, high = numsSize-2;

    while (low <= high) {
        int mid = low+(high-low)/2;

        if (nums[mid] != nums[mid-1] && nums[mid] != nums[mid+1]) {
            return nums[mid];
        }

        if (mid%2 == 1 && nums[mid] == nums[mid-1] || mid%2 == 0 && nums[mid] == nums[mid+1]) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }

    return -1;

}