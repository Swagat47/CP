#include <iostream>
#define ll long long

using namespace std;

int main(){
	ll n, pos;
	cin >> n >> pos;
	ll on=0, en=0;

	if(n%2!=0){
		on = n/2 + 1;
		en = n/2;
	}
	else{
		on = n/2;
		en = n/2;
	}

	if(pos<=on){
		ll result = 2*pos - 1;
		cout << result;
	}

	else{
		ll result = 2 * (pos-on);
		cout << result;
	}

}