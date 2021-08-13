#include <iostream>

using namespace std;

int gcd(int a, int b){
    if(a==b){
        return a;
    }else if(a>b){
        return gcd(a-b,b);
    }else{
        return gcd(a, b-a);
    }
}

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int k, hcf=0;
		cin >> k;
		if(k==100){
			cout<<1<<endl;
			continue;
		}
		hcf = gcd(k, 100-k);

		int ans = k/hcf + (100-k)/hcf;

		cout<< ans <<endl;
	}
	return 0;
}