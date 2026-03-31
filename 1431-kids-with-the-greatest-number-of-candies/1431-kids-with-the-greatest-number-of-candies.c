/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize) {
    int max = 0;
    bool *output = (bool*)malloc(candiesSize + 1);
    *returnSize = candiesSize;

    for(int i = 0 ;i < candiesSize; i ++){
        max = (candies[i] > max) ? candies[i] : max;

    }
    for(int i  = 0 ; i < candiesSize;i++ ){
        output[i] = (candies[i] + extraCandies >= max);

    }
    return output;

}