#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(){
	int l;
	cin >> l;
	string s;
	cin >> s;
	transform(s.begin(), s.end(), s.begin(), ::toupper);
	int arr[26] = {0};
	if(l>25){
		int sum =0;
		for(int i=0; i<l ;i++){
			int t = s.at(i)-65;
			if(arr[t]<1)
				arr[t]++
		}
		for(int i=0; i<26; i++){
			sum+=arr[i];
		}
		if(sum == 26)
			cout<<"YES"<<endl;
		else
			cout<<"NO"<<endl;
	}
	else
		cout<<"NO"<<endl;

}