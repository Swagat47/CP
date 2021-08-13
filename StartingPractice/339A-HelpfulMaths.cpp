#include <iostream>
#include <string>

using namespace std;

string s1;

void Selection_Sort(string s){
	int i, j, mid_idx;

	int n=s.size();

	for(i=0; i<n-2; i=i+2){
		mid_idx = i;
		for(j=i+2; j<n; j=j+2){
			
			if(s[mid_idx]>s[j]){
				mid_idx = j;
			}		
		}
		if(s.at(mid_idx)!=s.at(i)){
			char temp = s[mid_idx];
			s[mid_idx] = s[i];
			s[i] = temp;
		}
	}
	s1 = s;
}

int main(){
	string s;
	cin >> s;

	Selection_Sort(s);

	cout << s1;
	return 0;
}