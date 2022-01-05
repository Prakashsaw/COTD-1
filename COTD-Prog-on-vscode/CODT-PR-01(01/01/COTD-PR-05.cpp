#include <bits/stdc++.h>
using namespace std;

int gcd(int a,int b) {
    if(b==0) 
      return a;
    else
      return gcd(b,a%b);
}
int main() {
	// your code goes here
	int t;
	cin >> t;
	while ( t--) {
	    int i,n;
	    cin >> n;
	    int a[n];
	    for ( i = 0 ; i < n ; i ++)
	       cin >> a[i];
	   int res = a[0];
	   for(i = 1 ; i < n ; i++) 
           res = gcd( res , a[i]);
	    cout << res << endl;
	}
	return 0;
}
