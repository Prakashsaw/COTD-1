//First approach but Time Complexity is O(n) and space is O(n)
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        static int res[2];
        int i;
        int hash[n]={0};
        for(i=0;i<n;i++)
            arr[i]--;
        for(i=0;i<n;i++)
            hash[arr[i]]++;
        for(i=0;i<n;i++)
        {
            if(hash[i]==2)
              res[0]=i+1;
            if(hash[i]==0)
              res[1]=i+1;
        }
        return (res);
    }
};
//Second optimize approach in Time is O(n) And Space is O(1)
class Solution{
public:
    int *findTwoElement(int *arr, int n) {
        // code here
        static int res[2];
        int i;
        for(i=0;i<n;i++)
            arr[i]--;
        for(i=0;i<n;i++)
            arr[arr[i]%n]+=n;
        for(i=0;i<n;i++)
            arr[i]/=n;
        for(i=0;i<n;i++)
        {
            if(arr[i]==2)
              res[0]=i+1;
            if(arr[i]==0)
              res[1]=i+1;
        }
        return (res);
    }
};