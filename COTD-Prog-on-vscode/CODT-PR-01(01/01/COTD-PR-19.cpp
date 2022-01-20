//Brute force approach in complexity of O(NlonN)
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        if(nums.size() <= 2)
            return nums[0];
        int i, max = nums[0], ct = 0;
        int temp = nums.size()/2;
        int ans;
        for(i=0;i<nums.size();i++)
        {
            if(nums[i] == max)
            {
                ct++;
                if(ct > temp)
                {
                    ans = nums[i];
                    break;
                }
            }
            else //nums[i] > max
            {
                max = nums[i];
            }
        }
        return ans;
    }
};
//Optimized thought here and used algorithm is BOYR MOORE ALGORITHM
class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int ansIndex = 0,count = 1;
        int i,ans;
        int size = nums.size();
        for(i=0;i<size;i++)
        {
            if(nums[i] == nums[ansIndex])
                count++;
            else
                count--;
            if(count == 0)
            {
                ansIndex = i;
                count = 1;
            }
        }
        count = 0;
        for(i = 0;i < size; i++)
        {
            if(nums[i] == nums[ansIndex])
                count++;
        }
        if(count > size/2)
            ans = nums[ansIndex];
        return ans;
    }
};