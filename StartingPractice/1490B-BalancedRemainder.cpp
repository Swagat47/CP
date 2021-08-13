#include <iostream>
#include <cmath>

using namespace std;

int main(){
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int arr[n];
		int count=0;
		int c[3]={0};
		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
			if(arr[i]%3==0)
				c[0]++;
			else if(arr[i]%3==1)
				c[1]++;
			else
				c[2]++;
		}
		
		do{
			if(c[0]>n/3){
				c[1]+=(c[0]-n/3);
				count += (c[0]-n/3);
				c[0]=n/3;
			}
			else if (c[1]>n/3)
			{
				c[2]+=(c[1]-n/3);
				count += (c[1]-n/3);
				c[1]=n/3;
			}
			else{
				c[0]+=(c[2]-n/3);
				count += (c[2]-n/3);
				c[2]=n/3;
			}
		}while(c[0]!=n/3 || c[1]!=n/3 || c[2]!=n/3);
		cout<<count<<endl;
	}
	return 0;
}