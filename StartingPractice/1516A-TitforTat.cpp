// #include <iostream>

// using namespace std;

// int main()
// {
// 	int t;
// 	cin >> t;
// 	while(t--){
// 		int n,k;
// 		cin >>n >>k;

// 		int v[n]={0};

// 		for (int i = 0; i < n; ++i)
// 		{			
// 			cin >> v[i];		
// 		}

// 		for (int i = 0; i < n-1;)
// 		{
// 			if(v[i]!=0 && k>0){
// 				v[i]--;
// 				v[n-1]++;
// 				k--;
// 			}
// 			if (v[i]==0 && k>0)
// 			{
// 				i++;
// 			}
// 			else{
// 				break;	
// 			}
// 		}

// 		for (int i = 0; i < n; ++i)
// 		{
// 			cout<<v[i]<<" ";
// 		}
// 		cout<<endl;
// 	}
// 	return 0;
// }


#include<iostream>
#define ll long long 
using namespace std;
int main(){
  int t;
  cin>>t;
  while(t--){
      ll n,k;
      cin>>n>>k;
      ll a[n];
      for(ll i=0;i<n;i++){
         cin>>a[i];
      }
        ll count = 0;
        for(ll i=0;i<n;i++){
            while(a[i]>0 && k>0){
                k--;
                count++;
                a[i]--;
               
            }
            if(k==0){
                break;
            }
        }
        for(ll i=0;i<n;i++){
            while(count>0){
                count--;
                a[n-1-i]++;
            }
            if(count==0){
                break;
            }
        }
      
     for(ll i=0;i<n;i++){
         cout<<a[i]<<" ";
     }
     cout<<endl;
    }
   return 0;
}