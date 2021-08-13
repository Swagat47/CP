#include <iostream>

using namespace std;

int main(){
	int age1, age2, count=0;
	cin >> age1 >> age2;

	while(age1 <= age2){
		count++;
		age1*=3;
		age2*=2;
	}

	cout << count;
	return 0;
}