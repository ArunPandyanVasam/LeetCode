int findMin(int* nums, int numsSize) {
    

    int low = 0, high = numsSize-1;
    int ans = INT_MAX;

    while (low <= high) {
        int mid = low+(high-low);
        
        if (nums[low] <= nums[high]) {
            ans = (nums[low] < ans)? nums[low]: ans;
            break;
        }

        if (nums[low] <= nums[mid]) {
            ans = (nums[low] < ans)? nums[low]: ans;
            low = mid+1;
        } else {
            ans = (nums[mid] < ans)? nums[mid]: ans;
            high = mid-1;
        }

    }

    return ans;

}