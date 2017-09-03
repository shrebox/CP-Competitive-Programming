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

		int x[n+5],y[n+5];

		for(int i=0;i<n;i++)
		{
			cin >> x[i];
		}


		for(int i=0;i<n;i++)
		{
			cin >> y[i];
		}

		//cout << "here" << endl;

		int x1 = 0,y1=0;
		int x2 = 0,y2=0;

		for(int i=0;i<n;i++)
		{
			if(i%2==0)
			{
				x1+=x[i];
				y1+=y[i];
			}


			else{

				x2+=x[i];
				y2+=y[i];
			}
			
			
		}

		int xf,yf;

		xf = x1 + y2;
		yf = y1 + x2;



		if(xf<yf)
		{
			cout << xf << endl;
		}

		else
		{
			cout << yf << endl;
		}
	}
	
	return 0;
}