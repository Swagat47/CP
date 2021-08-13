#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin>>n;
		if (n>45)
		{
			cout<<-1<<endl;
		}
		else{
			int i=9;
			int c=0;
			string s="";
			while(n>=i && n>0){
				n-=i;
				s = to_string(i)+s;
				i--;
			}
			if (n!=0)
			{
				s = to_string(n)+s;
			}
			cout<<s<<endl;
		}
	}
	return 0;
}