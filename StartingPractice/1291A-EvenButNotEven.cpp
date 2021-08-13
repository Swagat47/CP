#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while(t--){
		int l;
		string s;
		cin >> l >> s;
		int arr[l];
		int o=0;
		int pos = l+1;
		int sum = 0;

		if (l==1)
		{
			cout<<"-1"<<endl;
			continue;
		}

		for (int i = l-1; i >=0; --i)
		{
			arr[i] = s[i]-48;
			if(o==0){
				if(arr[i]%2!=0){
					++o;
					pos = i;

					if (i==0 && arr[i+1]==0 && arr[i]%2!=0)
					{
						pos = -1;
					}
					
				}
			}	
			sum += arr[i];
		}

		if (pos == -1)
		{
			cout<<-1<<endl;
			continue;
		}

		if(arr[l-1]%2==0 && pos!=-1){
			sum -= arr[l-1];
			l--;
		}
		
		if(sum%2!=0 && pos <=l){
			sum -= arr[pos];
		}
		else
		{
			pos = l+1;
		}

		for (int i = 0; i < l; ++i)
		{
			if(i==pos)
				continue;
			else
				cout<<arr[i];
		}
		
		cout<<endl;
	}
	return 0;
}