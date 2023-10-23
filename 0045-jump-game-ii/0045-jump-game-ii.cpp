class Solution {
public:
    int jump(vector<int>& nums) {
       int n = nums.size();
    int jumps = 0;
    int last_pos = 0;
    int max_pos = 0;
    for (int i = 0; i < n - 1; i++) {
        max_pos = max(max_pos, i + nums[i]);
        if (i == last_pos) {
            jumps++;
            last_pos = max_pos;
        }
    }
    return jumps;
    }
};