#include<limits.h>
#include<stdbool.h>
bool increasingTriplet(int* nums, int numsSize) {
    if(numsSize < 3) return false;
    int first = INT_MAX;
    int second = INT_MAX;
    int *end = nums+ numsSize;
    while(nums < end ){
        int val = *nums;
        if(val <= first){
            first = val;
        }
        else if( val <= second ){
            second = val;
        }
        else{
            return true;
        }
        nums++;
    }
    return false;

}