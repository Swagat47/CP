#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int main()
{
	int t;
	cin >> t;
	
	for (int i = 0; i < t; ++i)
	{
		string s;
		cin >> s;
		int n = s.length();
		string str = "a";
		long value = n*97;
		long sum=0;
		//cout<<value<<endl;
		for (int i = 0; i < n; ++i)
		{
			sum += s[i];
		}
		//cout<<sum<<endl;


		if(n>1 && sum!=value){
			if (s[0]=='a' && s[n-1]=='a')
			{
				s.insert(n-1, str);
				cout<<"YES"<<endl;
				cout<<s<<endl;
			}
			else if(s[0]=='a' && s[n-1]!='a'){
				s.insert(0, str);
				cout<<"YES"<<endl;
				cout<<s<<endl;
			}
			else if(s[0]!='a' && s[n-1]=='a'){
				s.insert(n-1, str);
				cout<<"YES"<<endl;
				cout<<s<<endl;
			}
			else if(s[0]!='a' && s[n-1]!='a'){
				s.insert(0, str);
				cout<<"YES"<<endl;
				cout<<s<<endl;
			}
		}
		else{
			
			if (s[n/2]=='a')
			{
				cout<<"NO"<<endl;
			}
			else{
				s.insert(1, str);
				cout<<"YES"<<endl;
				cout<<s<<endl;
			}
		}
			
	}
	return 0;
}

// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int t;
//     cin>>t;
//     vector<string> s;
//     for(int i=0;i<t;i++){
//        string str;
//        cin>>str;
//        s.push_back(str);
//     }
//     for(int i=1;i<t;i++){
//         for(int j=0;j<i;j++){
//             if(s[i].compare(s[j])==1){
//                cout<<"YES"<<endl;
//                break;
//             }
//             else if((j=i-1) && s[i]!=s[j]){
//                cout<<"NO"<<endl;
//             }
           
//         }
//     }
//     return 0;
// }