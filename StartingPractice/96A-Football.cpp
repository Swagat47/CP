#include <iostream>
#include <string>

using namespace std;

int main(){
	int count=0;

	string s;
	cin >> s;
	int l = s.length();

	for(int i=0; i<l-6; i++){
		string temp = s.substr(i,7);
		if(temp=="1111111"|| temp == "0000000"){
			++count;
			break;
		}
	}
	if(count!=0)
		cout<<"YES";
	else
		cout<<"NO";

	return 0;
}