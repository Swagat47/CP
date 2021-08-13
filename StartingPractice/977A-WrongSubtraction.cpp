#include <iostream>

using namespace std;

int main(){
	int k;
	long long n;
	cin >> n >> k;

	while(k!=0){
		k--;
		if(n%10!=0){
			n-=1;
		}
		else
			n/=10;
	}
	cout<<n;
	return 0;
}