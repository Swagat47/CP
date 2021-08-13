#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int h,n,m;
		cin >> h >> n >> m;

		while(h > 10*m && n > 0){
			h = floor(h/2)+10;
			n--;
		}

		if (h<=10*m)
		{
			cout<<"YES"<<endl;
		}
		else
			cout<<"NO"<<endl;
	}
	return 0;
}