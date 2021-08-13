#include <iostream>
#define ll long long

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		ll n;
		cin >> n;
		ll count=0;
		if (n==1)
		{
			cout<<0<<endl;
		}
		else{
			while(n!=1 && (n%5==0 || n%3==0 || n%2==0)){
				if(n%5 == 0){
					n /= 5;
					count+=3;
				}
				if (n%3==0)
				{
					n/=3;
					count+=2;
				}
				if (n%2 == 0)
				{
					n/=2;
					count++;
				}		
			}
			if (n == 1)
			{
				cout<<count<<endl;
			}
			else
				cout<<-1<<endl;			
		}
	}
	return 0;
}