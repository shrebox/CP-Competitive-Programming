#include <bits/stdc++.h>

using namespace std;

#define make0(a) memset(a,0,sizeof(a))
#define fast_cin() ios_base::sync_with_stdio(0) 

int main()
{
	fast_cin();

	int t;

	cin >> t;

	int arr[100005];

	int count,flag;

	while(t--)
	{
		flag=0;
		count = 0;
		make0(arr);

		int n,k;

		cin >> n >> k;

		int ing;

		while(n--)
		{
			count =0;
			cin >> ing;

			int val;

			while(ing--)
			{
				cin >> val;

				if(arr[val]==0)
				{
					arr[val]=1;
				}

				count++;

				//cout << "coutn " << count << endl;
			}

			if(count==k && n!=1)
			{
				cout << "some" << endl;
				flag=1;
				break;
			}

			else if(count==k && n==1)
			{
				cout << "all" << endl;
				flag=1;
				break;
			}
		}

		int flaggy=0;

		if(flag!=1)
		{
			for(int i=1;i<=k;i++)
			{
				if(arr[i]!=1)
				{
					flaggy=1;
					break;
				}
			}

			if(flaggy==1)
			{
				cout << "sad" << endl;
			}
		}
	}

	return 0;
}