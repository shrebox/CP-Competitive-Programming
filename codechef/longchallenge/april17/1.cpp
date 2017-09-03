#include <bits/stdc++.h>

using namespace std;

int main()
{
	int t;

	cin >> t;

	vector<string> av,bv;
	string a,b,c,d;
	int count;

	while(t--)
	{
		cin >>a>>b>>c>>d;

		av.push_back(a);
		av.push_back(b);
		av.push_back(c);
		av.push_back(d);

		cin >>a>>b>>c>>d;

		bv.push_back(a);
		bv.push_back(b);
		bv.push_back(c);
		bv.push_back(d);

		count = 0;

		for(int i=0;i<av.size();i++)
		{
			for(int j=0;j<bv.size();j++)
			{
				if(av.at(i).compare(bv.at(j))==0)
				{
					count++;
					//cout << count << " " << av.at(i) << " " << bv.at(j) << endl; 
				}
			}
		}

		if(count>=2)
		{
			cout << "similar" << endl;
		}

		else
		{
			cout << "dissimilar" << endl;
		}

		av.clear();
		bv.clear();

	}

	return 0;
}