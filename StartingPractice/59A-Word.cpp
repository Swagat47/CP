#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	string s;
	cin >> s;
	int l=0, u=0;

	for(int i=0; i<s.length(); i++){
		if(s[i]>=65 && s[i]<=90)
			++u;
		else
			++l;
	}

	if(u>l)
		transform(s.begin(),s.end(),s.begin(), ::toupper);
	else
		transform(s.begin(),s.end(),s.begin(), ::tolower);

	cout<<s;

	return 0;
}