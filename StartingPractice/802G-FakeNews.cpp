#include <iostream>
#include <string>

using namespace std;

int main(){
	string s;
	cin >> s;

	long l = s.length();
	string ss = "heidi";
	int t = 0;

	for (int i=0; i < l; ++i)
	{
		if(s.at(i) == ss.at(t)){
			t++;
		}
		if(t==5)
			break;

	}
	if(t==5){
		cout<<"YES";
	}
	else
	{
		cout<<"NO";
	}

	return 0;

}