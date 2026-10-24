class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n = nums.size();
        vector<int> ans;
        unordered_map<int,int> mp;
        for(int j = 0; j<n; j++){
            int diff = target - nums[j];
            if(mp.contains(diff)){
                ans.push_back(mp[diff]);
                ans.push_back(j);
                return ans;
            }
            else{
                mp[nums[j]] = j;
            }
        }
        return {-1,-1};
    }
};
