#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int n,m;

		cin >> n;

		m = n;

		int max=-9999;

		int ch;

		while(n--)
		{
			cin >> ch;

			if(ch>max)
			{
				max = ch;
			}
		}

		cout << m-max << endl;
	}
	
	return 0;
}