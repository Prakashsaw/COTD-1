#include <bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	while(t--)
	{
		int num;
		cin >> num;
		if(num % 21 == 0)
		{
			cout << "The streak is broken!" << endl;
		}
		else
		{
			int flag = 0;
			while(num>0)
			{
				int rem = num % 100;
				if(rem == 21)
				{
					cout << "The streak is broken!\n";
					flag = 1;
					break;
				}
                num = num /10;
			}
			if(flag == 0)
			   cout << "The streak lives still in our heart!\n";
		}
	}
	return 0;
}