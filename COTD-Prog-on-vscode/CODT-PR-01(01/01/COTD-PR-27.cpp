//Brute force approach in O(N)
int solve(int A, int B, int C) {
    int i=C;
    while(--A)
    {
        if(i==B)
        {
            i=1;
            --A;
        }
        i++;
    } 
    return i%B;
}
//Optimized by mathematical approach in O(1)
int solve(int A, int B, int C) {
    int ans = (A+C-1) % B;
    if(ans == 0)
       return B;
    else
       return ans;
}
