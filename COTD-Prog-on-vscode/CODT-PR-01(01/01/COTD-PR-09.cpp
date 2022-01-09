class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int i,j;
        vector<int>index;
        i = 0;
        j = numbers.size() - 1;
        while(i<j) {
            int s = numbers[i] + numbers [j];
            if(s == target) {
                index.push_back(i+1);
                index.push_back(j+1);
                break;
            }
            if(s < target)  
                i++;
            if(s > target)
                j--;
        }
        return index;
        
    }
        
};