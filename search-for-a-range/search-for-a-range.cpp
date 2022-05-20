class Solution {
public:
    vector<int> searchRange(vector<int>& nums, int target) {
        int len = nums.size();
        int l = 0;
        int r = len - 1;
        int st = -1;
        int en = -1;
        
        while (l <= r)
        {
            long long mid = l + (r - l) / 2;
            if (nums[mid] == target)
            {
                int start = mid;
                while (mid < len && nums[mid] == target)
                    mid++;
                en = mid - 1;
                while (start >= 0 && nums[start] == target)
                    start--;
                st = start + 1;
                break;
            }
            else if (nums[mid] < target)
                l = mid + 1;
            else
                r = mid - 1;
        }
        return {st, en};
    }
};