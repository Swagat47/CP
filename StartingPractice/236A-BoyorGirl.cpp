#include <bits/stdc++.h>

using namespace std;

int main(){
	string username;
	cin >> username;
	int l = username.length();
	int c=0;

	int count[l] = {0};

	for(int i=0; i<l-1; i++){
		for(int j=i+1; j<l; j++){
			if(username[i]==username[j]){
				count[j]++;
			}
		}
	}

	for(int i=0; i<l; i++){
		if(count[i]==0)
			++c;
	}

	if(c%2==0)
		cout<<"CHAT WITH HER!";
	else
		cout<<"IGNORE HIM!";

	return 0;
}