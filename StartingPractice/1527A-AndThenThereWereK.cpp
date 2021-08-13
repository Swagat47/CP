#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	int tc;
	cin>>tc;
	while(tc--){
		int n;
		cin >> n;
		int p = log2(n);
		int n1 = pow(2,p)-1;
		cout<<n1<<endl;
	}

	return 0;
}