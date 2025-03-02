int removeDuplicates(int* nums, int numsSize) {
    int i = 0;
    for (int j = i + 1; j < numsSize; j++) {
        if (nums[i] != nums[j]) {
            i++;
            nums[i] = nums[j];
        }
    }

    return i + 1;
}