#include <iostream>

using namespace std;

int main(){
	int dist=0;
	int count=1;
	cin >> dist;

	count=dist/5;

	if(dist%5==0)
		cout << count;
	else
		cout << (count+1);

	
	return 0;
}