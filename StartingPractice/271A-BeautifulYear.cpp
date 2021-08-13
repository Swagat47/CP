#include <iostream>
#include <string>

using namespace std;


int beautifulYear(int y){
	int count=0;
	string s = to_string(y);

	for (int i=0; i<4; i++){
		count = 0;
		for(int j=i+1; j<4; j++){
			if (s[i]==s[j]){
				++count;			
				break;
			}
		}
		if(count!=0)
			break;
	}

	if(count==0)
		return y;
	else
		return 0;
}

int main(){
	int year;
	cin >> year;
	if(year<=9000){
		for(int i=year+1; i<=9012; i++){
			int result = beautifulYear(i);
			if(result==i){
				cout<<i;
				break;
			}
		}
	}

	return 0;
}