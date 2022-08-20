class Solution {
public:
    bool checkIfExist(vector<int>& arr) {
      map<int, int> mp;
        for (int i = 0; i < arr.size(); i++)
        {
            mp[arr[i]]++;
        }
        for (int i = 0; i < arr.size(); i++)
        {
            if (arr[i] % 2 == 0)
            {
                if(arr[i] == 0 and mp[arr[i]] > 1)
                    return true;
                else if (arr[i] != 0)
                    if(mp[arr[i]/2])
                        return true;
            }
        }
        return false;
    }
};