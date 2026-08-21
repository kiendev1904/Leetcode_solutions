class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int k = nums.size();
        vector<int> prefix(k);
        vector<int> suffix(k);
        vector<int> result(k);
        for(int i = 0; i< k; i++){
            if(i == 0) prefix[i] = 1;
            else{
                prefix[i] = prefix[i - 1] * nums[i - 1];
            }
        }
        for(int i = k - 1 ; i >= 0; i--){
            if(i == k - 1) suffix[i] = 1;
            else{
                suffix[i] = suffix[i + 1] * nums[i + 1];
            }
        }
        for(int i = 0 ; i < k ; i ++){
            result[i] = prefix[i] * suffix[i];
        }
        return result;

    }
};