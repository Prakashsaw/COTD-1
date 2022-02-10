// First approach in Time is O(N) and space is O(N)
class Solution{
    
    public:
    int transfigure (string a, string b)
    {
    	int i,j,hash1[130]={0},hash2[130]={0};
    	for(i=0;i<a.size();i++)
    	{
    	    hash1[a[i]]++;
    	}
    	for(i=0;i<b.size();i++)
    	{
    	    hash2[b[i]]++;
    	}
    	for(i=0;i<a.size();i++)
    	{
    	    if(hash1[a[i]] != hash2[a[i]]) 
    	         return -1;
    	}
    	i=a.size()-1,j=b.size()-1;
    	int opr_count=0;
    	while(i>=0 && j>=0)
    	{
    	    if(a[i] == b[j])
    	    {
    	        i--,j--;
    	    }
    	    else 
    	    {
    	        opr_count++;
    	        i--;
    	    }
    	}
    	return opr_count;
    }
};

// Optimize approach Time is O(N) and space is O(1)
class Solution{  
    public:
    int transfigure (string a, string b)
    {
    	int i,j,s=0;
    	for(i=0;i<a.size();i++)
    	{
    	    s=s+a[i];
    	    s=s-b[i];
    	}
    	// means frequencies must be same in both string of each character
    	if(s != 0) 
    	   return -1;
    	i=a.size()-1,j=b.size()-1;
    	int opr_count=0;
    	while(i>=0 && j>=0)
    	{
    	    if(a[i] == b[j])
    	    {
    	        i--,j--;
    	    }
    	    else 
    	    {
    	        opr_count++;
    	        i--;
    	    }
    	}
    	return opr_count;
    }
};
