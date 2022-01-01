class Solution{
    public:
    long long minTime(long long a[], long long b[], long long n)
    {
        // Your code goes here 
        long long a_sum = 0, b_sum = 0;
        long long i;
        for(i = 0; i < n; i = i+2) {
            a_sum = a_sum + a[i];
            if(i+1 < n)
              a_sum = a_sum + b[i+1];
        }
        for(i = 0; i < n; i = i+2) {
            b_sum = b_sum + b[i];
            if(i+1 < n)
               b_sum = b_sum + a[i+1];
        }
        return (a_sum < b_sum ? a_sum : b_sum);
    }
};
