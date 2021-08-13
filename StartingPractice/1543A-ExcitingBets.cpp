#include <iostream>
#define ll long long
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		ll a,b;
		cin >> a>>b;
		if(a==b){
			cout<<"0 0"<<endl;
			continue;
		}
		if(a==0 || b==0){
			ll t = (a==0)?b:a;
			cout<<t<<" "<<0<<endl;
			continue;
		}
		else{
			ll x = max(a,b) - min(a,b);
			ll y = min(a,b);
			if(max(a,b)%min(a,b)==0){
				if(x>y){
					cout<<x<<" "<<y<<endl;
				}
				else{
					cout<<y<<" "<<0<<endl;
				}
				continue;
			}
			else{
				ll ans = a%x;
				if(ans>x/2){
					cout<<x<<" "<<(x-ans)<<endl;
				}
				else{
					cout<<x<<" "<<ans<<endl;
				}
			}	
		}
	}
	return 0;
}