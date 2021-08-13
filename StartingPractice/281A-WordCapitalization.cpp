#include <cctype>
#include <string>
#include <iostream>
using namespace std;

int main(){
	string s;

	cin >> s;

	if(islower(s.at(0)))
		s.at(0) = s.at(0) - 32;

	cout << s;

	return 0;
}