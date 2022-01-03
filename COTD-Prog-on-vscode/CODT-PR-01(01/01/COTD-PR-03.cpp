class solution
{
    public:
    void sort012(int a[], int n)
    {
        // coode here
        int i, z_count = 0, o_count = 0, t_count = 0;
        for(i = 0 ; i < n ; i++) {
            if ( a[i] == 0)
                z_count++;
            else if ( a[i] == 1)
                o_count++;
            else
                t_count++;
        }
        for(i = 0; i < z_count; i++) 
           a[i] = 0;
        for(i = z_count; i < o_count + z_count; i++) 
           a[i] = 1;
        for(i = o_count + z_count; i < t_count + o_count + z_count; i++) 
           a[i] = 2;
    }
    
};