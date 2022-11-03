class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int endIndex, currMax = nums[0];
    int globalMax = nums[0];
    for (int i = 1; i < nums.size(); ++i) {
        currMax = max(nums[i], nums[i] + currMax);
        if (currMax > globalMax) {
            globalMax = currMax;
            endIndex = i;
        }
    }
    return globalMax;
        
    }
};