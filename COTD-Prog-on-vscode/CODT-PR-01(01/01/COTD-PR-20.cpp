class Solution {
public:
    vector<int> sortByBits(vector<int>& arr) {
        map<int,vector<int>>mp;
        for(auto i : arr)
        {
            int bit = __builtin_popcount(i);
            mp[bit].push_back(i);
        }
        vector<int>ans;
        for(auto i : mp)
        {
            vector<int>check = i.second;
            sort(check.begin(),check.end());
            for(auto j : check)
                ans.push_back(j);
        }
        return ans;
    }
};
//complexity is O(NlogN)