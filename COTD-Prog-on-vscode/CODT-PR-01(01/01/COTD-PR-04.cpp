#include<bits/stdc++.h>
using namespace std;

bool isPrime[1000001];
void sieve() {
    memset( isPrime , true , sizeof(isPrime) );
    for(int i = 0 ; i < 1000000 ; i++) 
       isPrime[i] = true;
    for( int i = 2 ; i <= sqrt(1000000) ; i++) {
        if ( isPrime[i] ) {
            for( int j = i*i ; j <= 1000000 ; j = j + i )
                isPrime[j] = false;
        }
    }   
}
int main() {
    int t;
    cin >> t;
    sieve();
    while ( t--) {
        int n;
        cin >> n;
        if ( n < 3) 
           cout << "No";
        else {
            if ( isPrime[n]==false) 
               cout << "Yes";
            else 
               cout << "No";   
        }
        cout << endl;
    }
    return 0;
}