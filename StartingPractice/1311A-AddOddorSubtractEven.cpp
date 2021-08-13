#include <iostream>

using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int a, b;
		cin >>a>>b;
		if(a==b){
			cout<<0<<endl;
			continue;
		}
		if ((a>b && (a-b)%2==0)|| (b>a && (b-a)%2!=0))
		{
			cout<<1<<endl;
			continue;
		}
		else{
			cout<<2<<endl;
		}
	}
	return 0;
}