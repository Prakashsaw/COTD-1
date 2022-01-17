class Solution{
    //Function to find the leaders in the array.
    public:
    vector<int> leaders(int a[], int n){
        // Code here
        vector<int>res;
        int temp[n], j = 0;
        int i, max = INT_MIN;
        for(i = n-1; i >= 0; i--)
        {
            if(a[i] >= max)
            {
                temp[j] = a[i];
                max = temp[j];
                j++;
            }
        }
        for(i = j-1; i >= 0; i--)
        {
            res.push_back(temp[i]);
        }
        return res;
        
    }
};