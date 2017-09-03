#include <bits/stdc++.h>

using namespace std;

#define fast_cin() ios_base::sync_with_stdio(0) 

int main()
{
	fast_cin();

	int t;

	cin >> t;

	while(t--)
	{
		int n;

		cin >> n;

		int arr[n+5];

		for(int i=0;i<n;i++)
		{
			cin >> arr[i];
		}

		sort(arr,arr+n);

		for(int i=0;i<n-1;i++)
		{
			if(arr[i+1]!=arr[i]+1 || arr[i]==arr[i+1])
			{
				//cout << arr[i] << " " << arr[i+1] << endl;

				if(arr[i]==arr[i+1])
				{
					cout << arr[i] << endl;
					break;
				}

				else
				{
					if(i==0)
					{
						//cout << "bhasad" << endl;
						cout << arr[i] << endl;
					}

					else
					{
						cout << arr[n-1] << endl;
					}

					break;
				}
			}
		}
	}
	
	return 0;
}