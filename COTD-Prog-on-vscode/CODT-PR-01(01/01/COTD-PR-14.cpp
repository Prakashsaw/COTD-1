class Solution {
public:
    int mySqrt(int x) {
        long long i = 1, ans = 0 ;
        while(i <= x)
        {
            long long mul = i * i;
            if( mul == x)
            {
                ans = i;
                break;
            }
            else if (mul > x)
            {
                ans = i - 1;
                break;
            }
            i++;
        }
        return ans;
    }
};