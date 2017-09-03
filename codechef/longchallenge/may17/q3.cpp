#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	while(t--)
	{
		int n;

		cin >> n;

		vector<int> v;

		int val;

		for(int i=0;i<2*n;i++)
		{
			cin >> val;

			v.push_back(val);
		}

		sort(v.begin(),v.end());

		if(n<2)
		{
			if(v[0]>v[1])
			{
				cout << v[0] << endl;
			}

			else
			{
				cout << v[1] << endl;
			}	

			for(int i=0;i<2;i++)
			{
				cout << v[i] << " "; 
			}

			cout << endl;

		}

		else
		{
			int slack = (n/2) + 1;

			cout << v[(2*n)-slack] << endl;

			for(int i=0;i<=2*(slack-1)-1;i++)
			{
				cout << v[i] << " "; 
			}

			for(int i=2*(slack-1);i<=2*(slack-1)+slack-1;i++)
			{
				cout << v[i] << " " << v[i+slack] << " ";
			}

			cout << endl;

		}

		

	}

	return 0;
}

// 1 2

// 1 2 3 4 5 6



// 1 2 3 4 5 6 7 8 9 10

// 2 4 8 9 10

// 1 2 3 4 5 6 7 8 9 10 11 12 13 14

// x x x 11 12 13 14



















































































































