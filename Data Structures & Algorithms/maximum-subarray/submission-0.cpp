class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int csum = 0;
        int ans = INT_MIN;
        for(int val : nums){
            csum += val;
            ans = max(csum,ans);
            if(csum < 0){
                csum = 0;
            }
        }
        return ans;
    }
};
