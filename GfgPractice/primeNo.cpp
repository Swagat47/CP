#include <bits/stdc++.h>
using namespace std;
bool checkIfPrime(int n){
	int count=0;
	for (int i = 2; i < n; ++i)
	{
		if (n%i==0)
		{
			count++;
		}
		if(count>0){
			break;
		}
	}
	if(count==0){
		return true;
	}
	else{
		return false;
	}
}
int main()
{

	int first_no, second_no;
	cin >> first_no >> second_no;

	if(checkIfPrime(first_no)&&checkIfPrime(second_no)){
		cout << first_no+second_no;
	}
	return -1;
}