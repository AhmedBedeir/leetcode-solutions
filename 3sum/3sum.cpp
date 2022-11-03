class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& a) {
        vector<vector<int>> ans;
    int i;
    int n = a.size();
    sort(a.begin(), a.end());
    int sum = 0;
    for (i = 0; i < n - 2; i++)
    {
        if (i == 0 || a[i] > a[i - 1])
        {
            int start = i + 1;
            int end = n - 1;
            int target = sum - a[i];
            while (start < end)
            {
                // Checking if current element
                // is same as previous
                if (start > i + 1 && a[start] == a[start - 1])
                {
                    start++;
                    continue;
                }
                if (end < n - 1 && a[end] == a[end + 1])
                {
                    end--;
                    continue;
                }
                if (target == a[start] + a[end])
                {
                    ans.push_back({a[i], a[start], a[end]});
                    start++;
                    end--;
                }
                else if (target > (a[start] + a[end])) start++;
                else end--;
            }
        }
    }
    return ans;
    }
};