#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    int findPeakElement(vector<int>& nums) {
        int max_index=0;
        int max=nums[0];
        for(int i=1;i<nums.size();i++)
        {
            if(nums[i]>max)
            {
                max=nums[i];
                max_index=i;
            }
        }
        return max_index;
    }
};