/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int*result = (int*)malloc(numsSize*sizeof(int));
    if(result ==  NULL) exit(0);
    int prefix = 1;
    int suffix = 1;
    result[0] = 1;
    for(int i = 1 ;i < numsSize ;i++){
        prefix = prefix * nums[i - 1];
        result[i] = prefix;

    }
    
    for(int i = numsSize - 2; i >= 0 ; i--){
        suffix = suffix*nums[i + 1];
        result[i] = result[i] * suffix;

    }
    *returnSize = numsSize;
    return result;
    
    
}