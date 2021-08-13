#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

ll gcd(int a, int b) {
   if (b == 0)
   return a;
   return gcd(b, a % b);
}

int main()
{
	int t;
	cin >> t;
	while(t--){
		ll l, r;
		cin >>l>>r;

		if (l*2<=r)
		{
			cout<<l<<" "<<l*2<<endl;
		}
		else
			cout<<-1<<" "<<-1<<endl;
	}
	return 0;
}