#include <bits/stdc++.h>

using namespace std;

int main()
{
	int n,k,p;

	cin >> n >> k >> p;

	deque<int> v;	

	int e;

	int kc = 0,max=0,temp,flag;
	int mp1=-1,mp2=-1,mark,mv1,mv2;
	int sp1=-1,sp2=-1,sv1,sv2;
	int startmax;

	for(int i=0;i<n;i++)
	{
		mark=i;
		cin >> e;
		v.push_back(e);

		if(i!=k)
		{
			max+=e;

			if(max==k)
			{
				mp2=i;
				mp1=i-k;
				flag=1;
				break;
			}

			startmax = max;
		}

		else
		{
			temp = max - v[i-k] + v[i];

			if(temp>max)
			{
				max = temp;
			}

			if(max==k)
			{
				mp2=i;
				mp1=i-k;
				break;
			}
		}

	}

	if(mp1==-1 && mp2==-1)
	{
		mp2 = n-1;
		mp1 = mp2 - k;
	}

	mv1 = v[mp1];
	mv2 = v[mp2];

	//cout << max << endl;

	vector<char> vc;

	char c;

	for(int i=0;i<p;i++)
	{
		cin >> c;
		vc.push_back(c);
	}

	int back;

	for(int i=0;i<p;i++)
	{

		if(vc[i]=='?')
		{

			cout << max << endl;
		}

		else
		{
			/*int tempu;

			tempu = v[v.size()-1];

			for(int i=0;i<v.size()-1;i++)
			{
				v[i+1] = v[i];
			}

			v[0] = tempu;*/
			// back = v.back();
			// v.pop_back();
			// v.push_front(back);

			if(v[v.size()-1]==1)
			{
				if(mp2==v.size()-1)
				{
					if(v[k-1]==0)
					{
						if(startmax+1>max)
						{
							max = startmax+1;
						}
					}
				}
			}

			// working here---------------------------------------

			rotate(v.rbegin(), v.rbegin() + 1, v.rend());

			


		}
	}

	/*for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	int back = v.back();

	cout << "element at the end " << back << endl;

	v.pop_back();

	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	v.push_front(back);

	for(int i=0;i<v.size();i++)
	{
		cout << v[i] << " ";
	}

	cout << endl;

	for(int i=0;i<vc.size();i++)
	{
		cout << vc[i] << " ";
	}

	cout << endl;*/

	return 0;
}




//1 1 0 0 1 1 == 1 1 1 0 0 1

