
void rotateRight(int* nums, int low, int high);


void rotate(int* nums, int numsSize, int k) {

    k = k % numsSize;
    if (k == 0 || numsSize <= 1) return;


    rotateRight(nums, 0, numsSize-k-1);
    rotateRight(nums, numsSize-k, numsSize-1);
    rotateRight(nums, 0, numsSize-1);
}

void rotateRight(int* nums, int low, int high) {

    while (low <= high) {
        int temp = nums[high];
        nums[high] = nums[low];
        nums[low] = temp;
        low++;
        high--;
    }

}