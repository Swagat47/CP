// #include <iostream>

// using namespace std;

// int main(){
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int l;
// 		cin >>l;
// 		string s;
// 		cin >> s;
// 		int count=0;
// 		for (int i = 0; i < l-1; ++i)
// 		{
// 			if(s[i]==s[i+1])
// 				continue;
// 			else{
// 				char ch = s[i];
// 				for (int j = i+1; j < l; ++j)
// 				{
// 					if(s[j]==s[i]){
// 						++count;
// 						break;
// 					}
// 				}
// 			}
// 			if(count == 1)
// 				break;
// 		}

// 		if(count==0)
// 			cout<<"YES"<<endl;
// 		else
// 			cout<<"NO"<<endl;
// 	}
// }
#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main(){
    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll arr[n];
        for(ll i=0;i<n;i++){
            cin>>arr[i];
        }
        int a[26] = {0};
        int flag = 1;
        for(ll i=0;i<n;i++){
            if(i==0 && a[arr[i]-'A']==0){
                a[arr[i]-'A']++;
            }else if(arr[i-1]==arr[i] && a[arr[i]-'A']==1){
                continue;
            }else if(arr[i-1] != arr[i] && a[arr[i]-'A']==1 ){
                
                flag = 0;
                break;
            }else if(arr[i-1] != arr[i] && a[arr[i]-'A']==0){
                 a[arr[i]-'A']++;
            }
        }
        if(flag){
            cout<<"YES"<<endl;
        }else{
            cout<<"NO"<<endl;
        }
        
    }

    
    return 0;
}