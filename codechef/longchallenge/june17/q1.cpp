#include <bits/stdc++.h>

using namespace std;

#define make0(a) memset(a,0,sizeof(a))

int main()
{

	int t;

	cin >> t;

	int arr[501];

	make0(arr);

	for(int i=1;i<=100;i++)
	{
		for(int j=2;j<=100;j++)
		{
			if(arr[i+j]==0)
			{
				arr[i+j] = 1;
			}
		}
	}

	while(t--)
	{
		int n;

		cin >> n;

		if(n==1)
		{
			cout << "1" << endl;
		}

		else if(n==2)
		{
			cout << "1 2" << endl;
		}

		else
		{

			/*int count =0;

			for(int i=1;i<=500;i++)
			{

				if(count!=n+1 && arr[i]!=1)
				{
					cout << i << " ";
					count++;
				}

				else
				{
					break;
				}

			}

			cout << "count: " << count << endl;

			cout <<  endl;*/

			cout << "1 2 ";

			for(int i=201;i<=201+n-2;i++)
			{
				cout << i << " ";
			}

			cout << endl;
		}

	}

	return 0;
}