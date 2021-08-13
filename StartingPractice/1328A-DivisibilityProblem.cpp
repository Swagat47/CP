#include <iostream>
#include <cmath>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >>t;
	while(t--){
		ll a,b;
		cin >>a>>b;
		if (a%b==0)
		{
			cout<<0<<endl;
		}
		else{
			cout<<(b-(a%b))<<endl;
		}
		
	}
	return 0;
}