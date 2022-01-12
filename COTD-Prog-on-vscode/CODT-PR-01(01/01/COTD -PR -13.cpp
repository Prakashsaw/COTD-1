// APPROACH NO - 01. Brute force thought . complexity is O(NlogN)
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int i;
        int j=0;
        for(i=m;i<m+n;i++)
        {
            nums1[i] = nums2[j++];
        }
        sort(nums1.begin(),nums1.end());
        
    }
};
// APPROACH NO - 02 .Now I solve it in Complexity O(N).
class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
       
        if(n>0) //if second array is empty then no need to merge
        {
            int i = 0, j = 0, k;
            int temp[m+n];
            for(k = 0; k < m + n; k++)
            {
               if(i<m)
               {
                   if(j<n)
                   {
                       if(nums1[i] <= nums2[j])
                       {
                           temp[k] = nums1[i];
                           i++;
                       }
                       else // if(nums1[i] > nums2[j])
                       {
                           temp[k] = nums2[j];
                           j++;
                       }
                    }
                    else
                    {
                         temp[k] = nums1[i];
                         i++;
                    }
                }
                else
                {
                    temp[k] = nums2[j];
                    j++;
                }
            }
        
            for(k = 0; k < m + n; k++)
            {
                nums1[k] = temp[k];
            }
        }
    }
};