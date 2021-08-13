#include <iostream>

using namespace std;

int main()
{
	int n,m;
	cin>>n>>m;

	int days = n;

	while(days!=0){
		int r = 0;
		if(days>=m){
			r = days%m;
		}
		days/=m;
		n+=days;
		days += r;
		
	}

	cout<<n;
	return 0;
}