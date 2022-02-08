//Brute force Approach Time is O(N) and Space is O(N)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int presum[n],postsum[n];
        int i;
        presum[0]=nums[0];
        postsum[n-1]=nums[n-1];
        for(i=1;i<n;i++)
            presum[i]=presum[i-1]+nums[i];
        for(i=n-2;i>=0;i--)
            postsum[i]=postsum[i+1]+nums[i];
        for(i=0;i<n;i++)
        {
            if(presum[i]==postsum[i])
                return i;
        }
        return -1;
    }
};
//Optimize approach Time is O(N) and space is O(1)
class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int n=nums.size();
        int i,leftsum=0,totalsum=0;
        for(i=0;i<n;i++)
            totalsum=totalsum+nums[i];
        for(i=0;i<n;i++)
        {
            if(leftsum==totalsum-leftsum-nums[i])
                return i;
            leftsum=leftsum+nums[i];
        }
        return -1;
    }
};