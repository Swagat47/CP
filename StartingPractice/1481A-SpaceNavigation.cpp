#include <iostream>
#include <string>

using namespace std;

int main(){
	int t;
	cin >> t;

	while(t--){
		int x,y;
		cin >> x >> y;
		string s;
		cin >> s;

		int len = s.length();
		int u=0,d=0,l=0,r=0;

		for (int i = 0; i < len; ++i)
		{
			
			char ch = s.at(i);

			if(ch == 'U')
				++u;
			else if(ch == 'D')
				--d;
			else if(ch == 'R')
				++r;
			else
				--l;	
		}
		int count = 0;

		if(x >= 0 && y >= 0){
			if (u>=y && r>=x){
				count++;
				cout<<"YES"<<endl;
			}
		}
		else if(x <= 0 && y >= 0){
			if (u>=y && l<=x){
				count++;
				cout<<"YES"<<endl;
			}
		}
		else if(x <= 0 && y <= 0){
			if (d<=y && l<=x){
				count++;
				cout<<"YES"<<endl;
			}
		}
		else if(x >= 0 && y <= 0){
			if (d<=y && r>=x){
				count++;
				cout<<"YES"<<endl;
			}
		}

		if (count == 0)
		{
			cout<<"NO"<<endl;
		}
	}
	return 0;

}