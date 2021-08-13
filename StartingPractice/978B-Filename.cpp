#include <iostream>
#include <string>

using namespace std;

int main(){
	int n;
	string s;

	cin >>n>>s;
	int count = 0;
	int max=0;

	for (int i = 0; i < s.length()-1; ++i)
	{
		if(s.at(i)=='x' && s.at(i)==s.at(i+1)){
			++count;
			if (count>1)
			{
				max++;
			}
		}
		
		else{
			count = 0;
		}
	}

	cout<<max;
}