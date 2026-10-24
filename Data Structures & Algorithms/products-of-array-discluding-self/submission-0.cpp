class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n = nums.size();
        long long pr = 1;
        int countZero = 0;
        int zeroIndex = -1;
        for(int i = 0; i<n; i++){
            if(nums[i] == 0){
                countZero++;
                zeroIndex = i;
            }
            else{
                pr *= nums[i];
            }
        }

        for(int i = 0; i<n; i++){
            if(countZero > 1){
                nums[i] = 0;
            }
            else if(countZero == 1){
                if(nums[i] != 0){
                    nums[i] = 0;
                }
                else{
                    nums[i] = pr;
                }
            }
            else{
                nums[i] = pr/nums[i];
            }

        }

        return nums;
    }
};
