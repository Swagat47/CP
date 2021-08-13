#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[2*n];
		int en=0, on=0;
		for(int i=0; i<2*n; i++){
			cin >> arr[i];
			if(arr[i]%2==0)
				++en;
			else
				++on;
		}
		if(en==on)
			cout<<"Yes"<<endl;
		else
			cout<<"No"<<endl;
	}
	return 0;
}