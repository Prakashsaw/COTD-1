#include<bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while(t--) {
        int n,m,i;
        cin >> n >> m;
        int a[n];
        for(i = 0; i < n; i++)
            cin >> a[i];
        for(i = 0; i < n; i++) 
            a[i] = a[i]%m;
        int freq[m];
        int j,c_freq;
        // findiing freq of all remainder which is in a[n] ans store in freq[m];
        for(i = 0; i < m; i++)
        {
            c_freq = 0;
            for(j = 0; j < n; j++) 
            {
                if(i == a[j])
                    c_freq++;
            }
            freq[i] = c_freq;
        }
        
        int c_distinct = 0;
        int c_unique = 0;
        for(i = 0; i < m; i++) {
            if(freq[i] == 1)
                c_unique++;
            if(freq[i] != 0) 
                c_distinct++;
        }
        cout << c_distinct << endl;
        cout << c_unique << endl;
        
    }
    return 0;
}