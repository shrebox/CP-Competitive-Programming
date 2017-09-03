#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k;

	cin >> n >> k;

	int arr[n+5];

	for(int i=1;i<=n;i++)
	{
		cin >> arr[i];
	}

	int count;

	if(arr[k]>0)
	{
		count = k;

		for(int i=k+1;i<=n;i++)
		{
			if(arr[i]==arr[k])
			{
				count++;
			}

			else
			{
				break;
			}
		}

		cout << count << endl;
	}

	else
	{
		count = 0;

		for(int i=k-1;i>=1;i--)
		{
			if(arr[i]>0)
			{
				count++;
			}
		}
		
		cout << count << endl;
	}

	return 0;
}