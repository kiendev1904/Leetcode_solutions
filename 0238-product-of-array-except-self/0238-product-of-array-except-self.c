/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int*result = (int*)malloc(numsSize*sizeof(int));
    if(result ==  NULL) exit(0);
    int suffix = 1;
    result[0] = 1;
    for(int i = 1 ;i < numsSize ;i++){
        result[i] = result[i - 1] * nums[i -1];   
    }
    
    for(int i = numsSize - 1; i >= 0 ; i--){
        result[i] = result[i] * suffix;
        suffix = suffix * nums[i];

    }
    *returnSize = numsSize;
    return result;
    
    
}