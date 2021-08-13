#include <iostream>
#include <cmath>

using namespace std;

int main(){

	int i,j,r,c;
	int v[5][5];

	for(i=1; i<6; i++){		
		for(j=1; j<6; j++){
			cin >> v[i-1][j-1];
			if(v[i-1][j-1]==1){
				r=i;
				c=j;
			}			
		}
	}	

	int steps = abs(3-r)+abs(3-c);
	cout << steps;
	return 0;
}