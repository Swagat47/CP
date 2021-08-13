#include <iostream>
#include <cmath>

using namespace std;

int main(){
	long long n;
	cin >> n;

	for (int i = 0; i < n; ++i)
	{	
		int t;
		cin >> t;
		int k=2, x=0, d=3;
		
		while(d<=t){
			if(t%d==0){
				x = t/d;
				break;
			}
			k++;
			d=pow(2,k)-1;		
		}
			
		cout<<x<<endl;
	}
}

