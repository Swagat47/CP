#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int k,l,m,n,d;
	cin >>k>>l>>m>>n>>d;

	if(k==1||l==1||m==1||n==1)
		cout<<d;

	else{
		int count = 0;
		int k1=k,l1=l,m1=m,n1=n;
		bool arr[d] = {false};
		for(int i=0; i<d; i++){
			if(i+1==k1){
				arr[i] = true;
				k1+=k;
			}
			if(i+1==l1){
				arr[i] = true;
				l1+=l;
			}
			if(i+1==m1){
				arr[i] = true;
				m1+=m;
			}
			if(i+1==n1){
				arr[i] = true;
				n1+=n;
			}
		}

		for(int i=0; i<d; i++){
			if(arr[i]==true)
				++count;
		}
		cout<<count;
	}
}