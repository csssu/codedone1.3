#include <bits/stdc++.h>
using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for(int i = 0; i < t; i++)
	{
		int n;
		cin >> n;
		
		cout << n << endl;
		
		for(int j = 1; j <= n; j++) {
			
			cout << j << (j == n ? "" : " ");
		}
		
		cout << endl;
	}	

	return 0;
}
