#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int r= n%10;
		int nod = floor(log10(n)+1);
		int count = (r-1)*10 + (nod*(nod+1))/2;
		cout<<count<<endl;
	}
	return 0;
}