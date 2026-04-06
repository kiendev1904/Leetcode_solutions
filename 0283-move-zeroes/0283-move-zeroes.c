
void moveZeroes(int* nums, int numsSize) {
    int first = 0;
    for(int i = 0 ;i < numsSize; i++){
        if(nums[i] != 0){
            nums[first] = nums[i];
            first++;
        }
    }
    while(first < numsSize )
    {
        nums[first++] = 0;
    }

}