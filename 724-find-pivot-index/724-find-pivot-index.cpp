class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n = nums.size();
    int prfx[n];
    prfx[0] = nums[0];
    for (int i = 1; i < n; i++)
        prfx[i] = prfx[i - 1] + nums[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        int check= prfx[n - 1] - prfx[i];
        if (check == sum)
            return i;
        sum = prfx[i];
    }
    return -1;
    }
};