#include <iostream>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		ll n;
		cin >> n;
		ll c1=0, c2=0;
		if(n%3==0){
			c1 = n/3;
			c2 = c1;
		}
		else if(n%3 == 1){
			c1 = n/3 + 1;
			c2 = n/3;
		}
		else{
			c1 = n/3;
			c2 = n/3 + 1;
		}
		cout<<c1<<" "<<c2<<endl;
	}
	return 0;
}