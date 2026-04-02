/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* productExceptSelf(int* nums, int numsSize, int* returnSize) {
    int *prefix =(int*)malloc(numsSize*sizeof(int));
    int *suffix =(int*)malloc(numsSize*sizeof(int));
    int tmp_1 =  1;
    prefix[0] = 1;
    for(int i = 1; i< numsSize; i++){
        tmp_1 = tmp_1*nums[i -1];
        prefix[i] = tmp_1;
    }
    *returnSize = numsSize;
    int tmp_2 =1 ;
    suffix[numsSize - 1] = tmp_2;
    for(int i = numsSize- 2; i >= 0 ; i--){
        tmp_2 = tmp_2 * nums[i + 1];
        suffix[i] = tmp_2;

    }
    int *result = (int*)malloc(numsSize*sizeof(int));
    for(int i = 0;i < numsSize;i++){
        result[i] = prefix[i]*suffix[i];

    }
    free(prefix);
    free(suffix);
    
    return result;
    
    
}