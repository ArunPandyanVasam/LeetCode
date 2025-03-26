// Last updated: 25/03/2025, 20:33:03
int search(int* nums, int numsSize, int target) {
    int low = 0;
    int high = numsSize-1;

    while (low <= high) {
        int mid = low+(high-low)/2;
        if (nums[mid] == target) {
            return mid;
        } else if (nums[mid] < target) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return -1;
}