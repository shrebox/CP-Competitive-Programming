#include <bits/stdc++.h>

using namespace std;

int main()
{
	int m,n;

	cin >> m >> n;

	int res = m*n;

	if(res%2==0)
	{
		cout << res/2 << endl;
	}

	else
	{
		cout << (res-1)/2 << endl;
	}

	return 0;
}