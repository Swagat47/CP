#include <iostream>
#include <cmath>
 
#define ll long long
 
using namespace std;
 
int main()
{
	int t;
	cin >> t;
	while(t--){
		ll n,g,b;
		cin >> n>> g>> b;
		
		if (n <= g || g >= b || ((n+1)/2)<=g)
		{
			cout<<n<<endl;
			continue; 
		}
		else{
			ll t1 = (n+1)/2;
			ll t2= t1/g;
 
			cout<<t1<<"  "<<t2<<endl;
			ll total = t2*g + t2*b + t1%g;
			if(g==1)
				total-=b;
			cout<<total<<endl;
		}
 
	}
	return 0;
}