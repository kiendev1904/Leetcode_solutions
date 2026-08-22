int P(int n, int k){
    if(k > n) return 0;
    int res = 1;
    for(int i = n - k + 1; i <= n; i++){
        res = res * i;
    }
    return res;
}

class Solution{
public: 
    int countNumbersWithUniqueDigits(int n){
        if(n == 0) return 1 ;
        int ans = 1;
        for(int i = 1; i <= n ; i++){
            ans += 9 * P(9, i - 1);
        }
        return ans;

    }

};