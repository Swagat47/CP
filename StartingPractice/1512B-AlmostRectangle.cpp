#include <iostream>
using namespace std;

int main()
{
	int tc;
	cin >> tc;
	while(tc--){
		int n;
		cin >> n;
		int x=0;
		int points[4] = {0};
		
		char arr[n][n];
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cin>>arr[i][j];
				if (arr[i][j]=='*')
				{
					points[x++] = i;
					points[x++] = j;
				}
			}
		}
		if (points[0]==points[2] || points[1]==points[3])
		{
			if(points[0]==points[2]){
				if (points[0]!=n-1)
				{
					arr[points[0]+1][points[3]] = '*';
					arr[points[0]+1][points[1]] = '*';
				}
				else{
					arr[points[0]-1][points[3]] = '*';
					arr[points[0]-1][points[1]] = '*';
				}
			}
			else{
				if (points[1]!=n-1)
				{
					arr[points[0]][points[3]+1] = '*';
					arr[points[2]][points[1]+1] = '*';
				}
				else{
					arr[points[0]][points[3]-1] = '*';
					arr[points[2]][points[1]-1] = '*';
				}
			}
		}
		else{
			arr[points[0]][points[3]] = '*';
			arr[points[2]][points[1]] = '*';
		}
		
		for (int i = 0; i < n; ++i){
			for (int j = 0; j < n; ++j){
				cout<<arr[i][j];
			}
			cout<<endl;
		}
	}
	return 0;
}