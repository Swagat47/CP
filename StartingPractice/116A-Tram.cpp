#include <iostream>

using namespace std;

int main(){
	int n;
	int max=0;
	int onboard=0;
	cin >> n;

	for (int i=0; i<n; i++){
		int entry,exit;

		cin>>exit>>entry;

		onboard += entry-exit;

		if(onboard>max)
			max=onboard;
	}
	cout<<max;

	return 0;
}