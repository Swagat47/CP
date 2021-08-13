#include <iostream>
#include <string>
#define ll long long
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n,a,b;
		string ans="No";
		cin >> n >> a >> b;
		while(n!=1 && n>0){
			if(a!=1){
				while(n%a==0){
					n/=a;
				}
				while(n%a!=0 && n!=1 && n>0){
					n-=b;
				}
			}
			else{
				if((n-1)%b==0){
					ans = "Yes";
					break;
				}
			}
		}
		if(n==1){
			ans = "Yes";
		}
		cout<<ans<<endl;
	}
	return 0;
}