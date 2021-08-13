#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(int argc, char const *argv[])
{
	int tc;
	cin>>tc;
	int t = 1;
	while(tc--){
		int n;
		cin >> n;
		int arr[n];
		vector<int> ve;
		vector<int> vo;
		for(int i=0; i<n; i++){
			cin >> arr[i];
			if(arr[i]%2==0){
				ve.push_back(arr[i]);
			}
			else{
				vo.push_back(arr[i]);
			}
		}
		sort(vo.begin(), vo.end());
		sort(ve.begin(), ve.end(), greater<int>());
		cout<<"Case #"<<t++<<": ";
		for(int i=0, e=0, o=0; i<n; i++){
			if(arr[i]%2==0)
				cout<<ve[e++]<<" ";
			else
				cout<<vo[o++]<<" ";
		}
		cout<<endl;
	}
	return 0;
}
