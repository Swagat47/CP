#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main()
{
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		int count = 0;
		if(n<10){
			cout<<n<<endl;
			continue;
		}
		else{			
			int nod = log10(n);
			int n1 = pow(10, nod);
			count +=9*nod;

			if(n1 != n){
				string s = to_string(n);
				int v = s[0]-48;
				count+=v;
				string ss="";
				ss.insert(0,nod+1,s[0]);
				int no = stoi(ss);
				if(n<no)
					count--;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}