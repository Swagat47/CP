#include <iostream>
#include <string>

using namespace std;

int main(){
	int n,t;
	string queue;
	cin>>n>>t;
	cin>>queue;

	for(int i=0; i<t; i++){
		int swaps = 0;
		for(int j=0; j<n; j++){
			if(queue[j]=='B'&& queue[j+1]=='G'){
				swaps++;
				char temp = queue[j];
				queue[j]=queue[j+1];
				queue[j+1]=temp;
				j++;
			}
		}
		if(swaps==0)
			break;
	}

	cout<<queue;
}