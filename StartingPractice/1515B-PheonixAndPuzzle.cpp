#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		int flag = 0;

		if (n%2!=0)
		{
		 	cout<<"NO"<<endl;
		 	continue;
		}
		
		double x = log2(n);
		if (x-int(x)==0){
			cout<<"YES"<<endl;
			continue;
		}
		
		if(x-int(x)>0){
			for (int i = 3; i*i < n; ++i)
			{
				int sq = i*i;
				double nn = double(n)/sq;
				//cout<<nn<<" ";
				if (nn-int(nn)==0)
				{
					double l = log2(nn);
					if (l-int(l)==0)
					{
						flag = 1;
						break;
					}
				}
				
			}
			if (flag == 1)
				cout<<"YES"<<endl;
			else
				cout<<"NO"<<endl;
		}
		else{
			cout<<"NO"<<endl;
		}
			
	}
	return 0;
}
