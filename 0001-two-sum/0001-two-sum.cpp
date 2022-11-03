class Solution {
public:
    vector<int> twoSum(vector<int>& a, int target) {
        map<int, int> mp;
        for (int i = 0; i < a.size(); i++)
        {
            int need = target - a[i];
            if (mp.count(need))
            {
                return {i, mp[need]};
            }
            mp[a[i]] = i;
        }
        return {};
    }
};