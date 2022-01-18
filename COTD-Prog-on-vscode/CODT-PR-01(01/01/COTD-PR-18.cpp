// first approach but auxiliary space becomes O(n) so, I am thinking optimize approach
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
           return 1;
        int i=0;
        int f_sum[n],b_sum[n];
        f_sum[0]=a[0];
        b_sum[n-1]=a[n-1];
        for(i=1;i<n;i++)
        {
            f_sum[i]=f_sum[i-1]+a[i];
        }
        for(i=n-2;i>=0;i--)
        {
            b_sum[i]=b_sum[i+1]+a[i];
        }
        i=0;
        while(i<n)
        {
            if(f_sum[i]==b_sum[i])
              return i+1;
            i++;
        }
        return -1;
        
    }

};

// Now we solved in given T.C. - O(n) And Space Complexity O(1)
class Solution{
    public:
    // Function to find equilibrium point in the array.
    // a: input array
    // n: size of array
    int equilibriumPoint(long long a[], int n) {
        if(n==1)
           return 1;
        int i=0;
        for(i=1;i<n;i++)
        {
            a[i]=a[i-1]+a[i];
        }
        for(i=1;i<n;i++)
        {
            if(a[i-1] == a[n-1]-a[i])
               return i+1;
        }
        return -1;
        
    }

};

