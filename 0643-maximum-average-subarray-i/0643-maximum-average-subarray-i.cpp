class Solution {
public:
    double findMaxAverage(vector<int>&nums,int k){
        int max = 0;
        for(int i = 0; i< k; i++){
          max = max + nums[i];
        }
        int current_sum = max; 
        for(int i = k; i < nums.size(); i ++){
          current_sum = current_sum - nums[i - k] + nums[i];
          if(current_sum > max) max = current_sum;

        }
        double ans = (double)max / k;
        return ans;
        
    }
};
