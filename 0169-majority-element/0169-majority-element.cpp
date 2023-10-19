class Solution {
public:
    int majorityElement(vector<int>& nums) {
        map<int, int> mp;
    for (int num : nums) {
        mp[num]++;
    }
    int ans = -1000000000;
    for (auto it : mp) {
        if (it.second > nums.size() / 2) {
            ans = max(ans, it.first);
        }
    }
    return ans;
    }
};