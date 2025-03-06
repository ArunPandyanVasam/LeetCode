/**
 * Note: The returned array must be malloced, assume caller calls free().
*/

int firstOccurrence(int* nums, int numsSize, int target);
int lastOccurrence(int* nums, int numsSize, int target);

int* searchRange(int* nums, int numsSize, int target, int* returnSize) {
    *returnSize = 2;
    int* result = (int*)malloc(2*sizeof(int));
    result[0] = firstOccurrence(nums, numsSize, target);
    result[1] = lastOccurrence(nums, numsSize, target);
    return result;
}

int firstOccurrence(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize-1;
    int first = -1;

    while (low <= high) {
        int mid = low+(high-low)/2;

        if (nums[mid] == target) {
            first = mid;
            high = mid-1;
        } else if (nums[mid] < target) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }

    return first;

}

int lastOccurrence(int* nums, int numsSize, int target) {
    int low = 0, high = numsSize-1;
    int last = -1;

    while (low <= high) {
        int mid = low+(high-low)/2;

        if (nums[mid] == target) {
            last = mid;
            low = mid+1;
        } else if (nums[mid] < target) {
            low = mid+1;
        } else {
            high = mid-1;
        }
    }
    return last;
}