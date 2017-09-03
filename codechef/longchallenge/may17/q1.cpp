#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	string s;

	//cout<<"1"<<endl;

	while(t--)
	{
		cin >> s;
		//cout<<"2"<<endl;
		int ic=100004,ie=100005,is=100006;
		int count = 0,flag=0,f1=0,f2=0,f3=0;

		for(int i=0;i<s.length();i++)
		{
			//cout<<"3"<<endl;
			if(s[i]=='C')
			{
				ic = i;
				f1=1;
			}

			else if(s[i]=='E')
			{
				ie = i;
				f2=1;
			}

			else
			{
				is = i;
				f3=1;
			}

			if(f1==0 && f2==1 && f3==1)
			{
				if(is<ie)
				{
					flag=1;
					break;
				}
			}

			else if(f1==1 && f2==1 && f3==0)
			{
				if(ie<ic)
				{
					flag=1;
					break;
				}
			}

			else if(f1==1 && f2==0 && f3==1)
			{
				if(is<ic)
				{
					flag=1;
					break;
				}
			}

			else if(f1==1 && f2==1 && f3==1)
			{
				if(ie<ic || is<ie || is<ic)
				{
					flag=1;
					break;
				}
			}

			count++;
		}
		//cout<<"4"<<endl;

		if(flag==1)
		{
			cout << "no" << endl;
			//cout<<"5"<<endl;
		}

		else
		{
			cout << "yes" << endl;
		}

		

		//cout<<"9"<<endl;

		
	}

	return 0;
}