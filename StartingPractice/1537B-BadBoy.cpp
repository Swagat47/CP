#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int m,n,x,y;
		cin >>m>>n>>x>>y;
		if(x==1&&y==1){
			cout<<1<<" "<<n<<" "<<m<<" "<<n<<endl;
		}
		else if(x==m && y==n){
			cout<<1<<" "<<1<<" "<<1<<" "<<n<<endl;
		}
		else if(x==1&&y==n){
			cout<<1<<" "<<1<<" "<<m<<" "<<1<<endl;
		}
		else if(x==m && y==1)
			cout<<1<<" "<<1<<" "<<1<<" "<<n<<endl;
		else{
			cout<<m<<" "<<1<<" "<<1<<" "<<n<<endl;
		}
	}
	return 0;
}