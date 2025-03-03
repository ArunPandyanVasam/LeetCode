void rotate(int* nums, int numsSize, int k) {

    if (numsSize == 0) return;
    k = k%numsSize;

    int* temp = (int*)malloc(k*sizeof(int));
    for (int i = numsSize-k; i < numsSize; i++) {
        temp[i-numsSize+k] = nums[i];
    }

    for (int i = numsSize-k-1; i>=0 ; i--) {
        nums[i+k] = nums[i];
    }

    for (int i = 0; i < k; i++) {
        nums[i] = temp[i];
    }

}
