class Solution {
public:
    int findMin(vector<int>& nums) {
        int len = nums.size();
        if (nums[len - 1] > nums[0])
            return nums[0];
        if (len == 2)
        {
            return min(nums[0], nums[1]);
        }
        int l = 0;
        int r = len - 1;
        int first = nums[0];
        while (l < r)
        {
            long long mid = (l + r) / 2 ;
            if (nums[mid] >= first)
            {
                l = mid + 1;
            }
            else
                r = mid;
        }
        return nums[l];
    }
};