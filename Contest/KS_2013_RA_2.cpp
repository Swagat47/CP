#include <iostream>
#include <string>
#define ll long long
using namespace std;

void Give_number(char ch){
	switch (ch){
		case '1':
			cout<<"one ";
			break;
		case '2':
			cout<<"two ";
			break;
		case '3':
			cout<<"three ";
			break;
		case '4':
			cout<<"four ";
			break;
		case '5':
			cout<<"five ";
			break;
		case '6':
			cout<<"six ";
			break;
		case '7':
			cout<<"seven ";
			break;
		case '8':
			cout<<"eight ";
			break;
		case '9':
			cout<<"nine ";
			break;
		case '0':
			cout<<"zero ";
			break;
	}
}

void count_no(int n){
	switch(n){
		case 2:
			cout<<"double ";
			break;
		case 3:
			cout<<"triple ";
			break;
		case 4:
			cout<<"quadruple ";
			break;
		case 5:
			cout<<"quintuple ";
			break;
		case 6:
			cout<<"sextuple ";
			break;
		case 7:
			cout<<"septuple ";
			break;
		case 8:
			cout<<"octuple ";
			break;
		case 9:
			cout<<"nontuple ";
			break;
		case 10:
			cout<<"decuple ";
			break;
	}
}

int main()
{
	int tc;
	cin >> tc;
	int t = 1;
	while(tc--){
		cout<<"Case #"<<t++<<": ";
		string n;
		cin >> n;
		string s;
		cin >> s;
		int start = 0;
		for(int i=0; i<s.length(); i=i+2){
			int temp = s[i]-'0';						
			string ss = n.substr(start, temp);
			for(int j=0; j<ss.length(); j++){
				int count = 1;
				while(ss[j]==ss[j+1]){
					++count;
					j++;
				}
				if(count>1){
					count_no(count);
				}
				Give_number(ss[j]);
			}
			start+=temp;
		}
		cout<<endl;
	}
	return 0;
}