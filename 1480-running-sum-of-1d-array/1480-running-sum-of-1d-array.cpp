class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        vector<int>prfx(nums.size());
        prfx[0] = nums[0];
        for (int i = 1; i < nums.size(); i++)
        {
            prfx[i] = prfx[i - 1] + nums[i];
        }
        return prfx;
    }
};